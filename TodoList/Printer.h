#ifndef PRINTER_H 
#define PRINTER_H

#include "TodoList.h"

class Printer
{
	public:
		static void displayMenu();

		static void printEditTodoOptions();
		static void printAllTodos(const TodoList& todoList);
		static void printTodo(const Todo& todo);

		static void pauseAndWait();
};

#endif // !PRINTER_H 

