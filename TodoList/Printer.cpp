#include "Printer.h"

#include <iostream>
#include <limits>
#include <vector>

using namespace std;

void Printer::displayMenu()
{	
	cout << "\nPlease select an option: \n" << endl;
	
	vector<string> options = {
		"View reminder details",
		"Add new reminder",
		"Delete reminder",
		"Edit reminder",
		"Mark as done",
		"Clear all reminders",
		"Exit"
	};

	size_t size = options.size();
	for (size_t i = 0; i < size; ++i)
	{
		cout << (i + 1) << ". " << options[i] << endl;
	}

	cout << '\n';
}

void Printer::printEditTodoOptions()
{
	cout << "\nPlease select an option: \n" << endl;

	vector<string> options = {
		"Edit reminder title",
		"Edit reminder date",
		"Edit reminder time",
		"Edit reminder location",
		"Edit reminder priority",
		"Exit"
	};

	size_t size = options.size();
	for (size_t i = 0; i < size; ++i)
	{
		cout << (i + 1) << ". " << options[i] << endl;
	}

	cout << '\n';
}

void Printer::printAllTodos(const TodoList& todoList)
{
	cout << "\n" << string(45, '*') << endl;
	cout << string(2, '\t') << "TO-DO LIST" << endl;
	cout << string(45, '*') << endl;
	
	const vector<Todo>& TODOS = todoList.getAllTodos();
	if (TODOS.empty())
	{
		cout << "\n" << string(2, '\t') << "No Reminders\n" << endl;
	}
	else
	{
		int count = 0;
		for (const Todo& todo : TODOS)
		{	
			cout << "\t" << (count + 1) << ". "
				<< todo.getTitle() << endl;
			count++;
		}
	}
}

void Printer::printTodo(const Todo& todo)
{
	cout << "\n\t" << "Title: " << todo.getTitle() << "\n"
		<< "\tDate: " << todo.getDate() << "\n"
		<< "\tTime: " << todo.getTime() << "\n"
		<< "\tLocation: " << todo.getLocation() << "\n"
		<< "\tPriority: " << todo.getPriority() << endl;
}

void Printer::pauseAndWait()
{
	cout << endl;
	system("Pause");
}