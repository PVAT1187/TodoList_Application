#include "TodoList.h"
#include "Formatter.h"

#include <algorithm>

using namespace std;

void TodoList::addTodo(const Todo& todo)
{
	todoList.push_back(todo);
	sort(todoList.begin(), todoList.end());
}

void TodoList::deleteTodo(int index)
{
	todoList.erase(todoList.begin() + index);
}

void TodoList::markAsDone(int index)
{
	todoList[index].setTitle(Formatter::formatTitle(getTitle(index)));
}

void TodoList::editTodoTitle(int index, const string& newTitle)
{
	todoList[index].setTitle(newTitle);
}

void TodoList::editTodoDate(int index, const string& newDate)
{
	todoList[index].setDate(newDate);
	sort(todoList.begin(), todoList.end());
}

void TodoList::editTodoTime(int index, const string& newTime)
{
	todoList[index].setTime(newTime);
	sort(todoList.begin(), todoList.end());
}

void TodoList::editTodoLocation(int index, const string& newLocation)
{
	todoList[index].setLocation(newLocation);
}

void TodoList::editTodoPriority(int index, int newPriority)
{
	todoList[index].setPriority(newPriority);
	sort(todoList.begin(), todoList.end());
}

string TodoList::getTitle(int index) const
{
	return todoList[index].getTitle();
}

string TodoList::getDate(int index) const
{
	return todoList[index].getDate();
}

string TodoList::getTime(int index) const
{
	return todoList[index].getTime();
}

string TodoList::getLocation(int index) const
{
	return todoList[index].getLocation();
}

int TodoList::getPriority(int index) const
{
	return todoList[index].getPriority();
}

const Todo& TodoList::getTodo(int index) const
{
	return todoList[index];
}

const vector<Todo>& TodoList::getAllTodos() const

{
	return todoList;
}

bool TodoList::isEmpty() const
{
	return todoList.empty();
}

void TodoList::clear()
{
	todoList.clear();
}