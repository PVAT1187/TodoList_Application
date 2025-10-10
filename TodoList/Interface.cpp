#include "Interface.h"
#include "Printer.h"
#include "DataLoader.h"
#include "Handler.h"

#include <iostream>

using namespace std;

void processMenu(TodoList& todoList)
{
    int answer = 0;
    while (answer != 7)
    {
        viewAllTodos(todoList);

        Printer::displayMenu();

        cout << "Your selection: ";
        cin >> answer;

        switch (answer)
        {
            case 1:
                viewTodoDetails(todoList);
                Printer::pauseAndWait();
                break;
            case 2:
                addTodo(todoList);
                Printer::pauseAndWait();
                break;
            case 3:
                deleteTodo(todoList);
                Printer::pauseAndWait();
                break;
            case 4:
                editTodo(todoList);
                Printer::pauseAndWait();
                break;
            case 5:
                markAsDone(todoList);
                Printer::pauseAndWait();
                break;
            case 6:
                clearAllTodos(todoList);
                Printer::pauseAndWait();
                break;
            case 7:
                cout << "\nThank you for visiting!";
                break;
            default:
                cout << "\nInvalid selection. Please try again.\n";
                Printer::pauseAndWait();
                break;
        }
    }
}

void getTodoInformation(string& title, string& date,
    string& time, string& location, int& priority)
{
    cout << "\nEnter reminder title: ";
    getline(cin >> ws, title);

    cout << "Enter reminder date (mm/dd/yy): ";
    getline(cin, date);

    cout << "Enter reminder time: ";
    getline(cin, time);

    cout << "Enter reminder location: ";
    getline(cin >> ws, location);

    cout << "Enter reminder priority: ";
    cin >> priority;
}

void viewAllTodos(const TodoList& todoList)
{
    Printer::printAllTodos(todoList);
}

void viewTodoDetails(const TodoList& todoList)
{
    if (todoList.isEmpty())
    {
        cerr << "\nThere is no reminders in the list. "
            << "Please try again later." << endl;
    }
    else
    {
        int index = 0;
        cout << "\nPlease enter reminder number: ";
        cin >> index;
        index -= 1;

        Printer::printTodo(todoList.getTodo(index));
    }
}

void addTodo(TodoList& todoList)
{
    string title;
    string date;
    string time;
    string location;
    int priority = 0;

    getTodoInformation(title, date, time, location, priority);

    Todo todo(title, date, time, location, priority);
    todoList.addTodo(todo);

    cout << "\nYou are adding this reminder to the list: " << endl;
    Printer::printTodo(todo);

    cout << "\nAdding Reminder Successfully!" << endl;
}

void deleteTodo(TodoList& todoList)
{
    if (todoList.isEmpty())
    {
        cerr << "\nThere is no reminders in the list. "
            << "Please try again later." << endl;
    }
    else
    {
        viewAllTodos(todoList);
        
        int index = 0;
        cout << "\nEnter the number of the reminder "
            << "you would like to delete: ";
        cin >> index;
        index -= 1;

        cout << "\nYou are deleting this reminder from the list: " << endl;
        Printer::printTodo(todoList.getTodo(index));

        todoList.deleteTodo(index);

        cout << "\nDeleting Reminder Successfully!" << endl;
    }
}

void editTodo(TodoList& todoList)
{
    if (todoList.isEmpty())
    {
        cerr << "\nThere is no reminders in the list. "
            << "Please try again later." << endl;
    }
    else
    {
        Printer::printEditTodoOptions();

        int answer = 0;
        cout << "Your selection: ";
        cin >> answer;

        switch (answer)
        {
            case 1:
                Handler::handleEditTitle(todoList);
                break;
            case 2:
                Handler::handleEditDate(todoList);
                break;
            case 3:
                Handler::handleEditTime(todoList);
                break;
            case 4:
                Handler::handleEditLocation(todoList);
                break;
            case 5:
                Handler::handleEditPriority(todoList);
                break;
            case 6:
                cout << "\nExiting edit menu." << endl;
                break;
            default:
                cout << "Invalid selection. Please try again." << endl;
                break;
        }
    }
}

void markAsDone(TodoList& todoList)
{
    if (todoList.isEmpty())
    {
        cerr << "\nThere is no reminders in the list. "
            << "Please try again later." << endl;
    }
    else
    {
        viewAllTodos(todoList);

        int index = 0;
        cout << "\nEnter the reminder number "
            << "you would like to mark as done : ";
        cin >> index;
        index -= 1;

        todoList.markAsDone(index);

        viewAllTodos(todoList);
    }
}

void clearAllTodos(TodoList& todoList)
{
    if (todoList.isEmpty())
    {
        cerr << "\nThere is no reminders in the list. "
            << "Please try again later." << endl;
    }
    else
    {
        todoList.clear();
        cout << "\nAll reminders have been deleted successfully!" << endl;
	}
}
