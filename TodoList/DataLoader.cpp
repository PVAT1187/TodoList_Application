#include "DataLoader.h"

#include <fstream>
#include <iostream>

using namespace std;

void DataLoader::saveTodo(const TodoList& todoList,
	const string& filename)
{
	ofstream out(filename);

	const vector<Todo>& TODO_SET = todoList.getAllTodos();
	for (const Todo& todo : TODO_SET)
	{
		out << todo.getTitle() << endl;
		out << todo.getDate() << endl;
		out << todo.getTime() << endl;
		out << todo.getLocation() << endl;
		out << todo.getPriority() << endl;
	}

	out.close();
}

void DataLoader::loadTodo(TodoList& todoList,
	const string& filename)
{
	ifstream in(filename);

	while(true)
	{
		string title;
		string date;
		string time;
		string location;
		int priority = 0;

		if (!getline(in, title)) break;
		if (!getline(in, date)) break;
		if (!getline(in, time)) break;
		if (!getline(in, location)) break;
		if (!(in >> priority)) break;
		in.ignore();

		Todo todo(title, date, time, location, priority);
		todoList.addTodo(todo);
	}

	in.close();
}