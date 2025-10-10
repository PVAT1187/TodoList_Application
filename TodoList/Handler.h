#ifndef HANDLER_H
#define HANDLER_H

#include "TodoList.h"

class Handler
{
	public:
		static void handleEditTitle(TodoList& todoList);
		static void handleEditDate(TodoList& todoList);
		static void handleEditTime(TodoList& todoList);
		static void handleEditLocation(TodoList& todoList);
		static void handleEditPriority(TodoList& todoList);
};

#endif // !HANDLER_H

