#include "Todo.h"
#include "Formatter.h"

#include <iostream>

using namespace std;

string Todo::getTitle() const
{
	return title;
}

string Todo::getDate() const
{
	return Formatter::formatDate(date);
}

string Todo::getTime() const
{
	return Formatter::formatTime(time);
}

string Todo::getLocation() const
{
	return location;
}

int Todo::getPriority() const
{
	return priority;
}

void Todo::setTitle(const string& newTitle)
{
	title = newTitle;
}

void Todo::setDate(const string& newDate)
{
	date = newDate;
}

void Todo::setTime(const string& newTime)
{
	time = newTime;
}

void Todo::setLocation(const string& newLocation)
{
	location = newLocation;
}

void Todo::setPriority(int newPriority)
{
	priority = newPriority;
}

bool Todo::operator<(const Todo& otherTodo) const
{
	if (date != otherTodo.date) 
		return (date < otherTodo.date);
	if (time != otherTodo.time) 
		return (time < otherTodo.time);
	return (priority < otherTodo.priority);
}