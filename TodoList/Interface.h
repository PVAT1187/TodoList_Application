#ifndef INTERFACE_H
#define INTERFACE_H

#include "TodoList.h"

void processMenu(TodoList& todoList);

void getTodoInformation(std::string& title, std::string& date,
	std::string& time, std::string& location, int& priority);

void viewAllTodos(const TodoList& todoList);
void viewTodoDetails(const TodoList& todoList);

void addTodo(TodoList& todoList);
void deleteTodo(TodoList& todoList);
void editTodo(TodoList& todoList);
void markAsDone(TodoList& todoList);

void clearAllTodos(TodoList& todoList);

#endif // !INTERFACE_H

