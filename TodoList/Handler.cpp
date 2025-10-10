#include "Handler.h"
#include "Printer.h"

#include <iostream>
#include <limits>

using namespace std;

void Handler::handleEditTitle(TodoList& todoList)
{
    Printer::printAllTodos(todoList);
    
    int index = 0;
    cout << "\nEnter the number of the reminder you would like to edit: ";
    cin >> index;
    index -= 1;

    cout << "\nYou are changing this reminder title:\n";
    Printer::printTodo(todoList.getTodo(index));

    string newTitle;
    cout << "\nEnter the new title: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, newTitle);

    todoList.editTodoTitle(index, newTitle);
}

void Handler::handleEditDate(TodoList& todoList)
{
    Printer::printAllTodos(todoList);
    
    int index = 0;
    cout << "\nEnter the number of the reminder you would like to edit: ";
    cin >> index;
    index -= 1;

    cout << "\nYou are changing this reminder date:\n";
    Printer::printTodo(todoList.getTodo(index));

    string newDate;
    cout << "\nEnter the new date: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, newDate);

    todoList.editTodoDate(index, newDate);
}

void Handler::handleEditTime(TodoList& todoList)
{
    Printer::printAllTodos(todoList);
    
    int index = 0;
    cout << "\nEnter the number of the reminder you would like to edit: ";
    cin >> index;
    index -= 1;

    cout << "\nYou are changing this reminder time:\n";
    Printer::printTodo(todoList.getTodo(index));

    string newTime;
    cout << "\nEnter the new time: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, newTime);

    todoList.editTodoTime(index, newTime);
}

void Handler::handleEditLocation(TodoList& todoList)
{
    Printer::printAllTodos(todoList);
    
    int index = 0;
    cout << "\nEnter the number of the reminder you would like to edit: ";
    cin >> index;
    index -= 1;

    cout << "\nYou are changing this reminder location:\n";
    Printer::printTodo(todoList.getTodo(index));

    string newLocation;
    cout << "\nEnter the new location: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, newLocation);

    todoList.editTodoLocation(index, newLocation);
}

void Handler::handleEditPriority(TodoList& todoList)
{
    Printer::printAllTodos(todoList);
    
    int index = 0;
    cout << "\nEnter the number of the reminder you would like to edit: ";
    cin >> index;
    index -= 1;

    cout << "\nYou are changing this reminder priority:\n";
    Printer::printTodo(todoList.getTodo(index));

    int newPriority = 0;
    cout << "\nEnter the new priority: ";
    cin >> newPriority;

    todoList.editTodoPriority(index, newPriority);
}