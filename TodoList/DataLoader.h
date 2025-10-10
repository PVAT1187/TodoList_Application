#ifndef DATALOADER_H
#define DATALOADER_H

#include "TodoList.h"

class DataLoader
{
	public:
		static void saveTodo(const TodoList& todoList,
			const std::string& filename);
		static void loadTodo(TodoList& todoList,
			const std::string& filename);
};

#endif // !DATALOADER_H

