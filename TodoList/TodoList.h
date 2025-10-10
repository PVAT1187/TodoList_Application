#ifndef TODOLIST_H
#define TODOLIST_H

#include "Todo.h"

#include <vector>

class TodoList
{
	public:
		void addTodo(const Todo& todo);
		void deleteTodo(int index);
		void markAsDone(int index);

		void editTodoTitle(int index, const std::string& newTitle);
		void editTodoDate(int index, const std::string& newDate);
		void editTodoTime(int index, const std::string& newTime);
		void editTodoLocation(int index, const std::string& newLocation);
		void editTodoPriority(int index, int newPriority);

		std::string getTitle(int index) const;
		std::string getDate(int index) const;
		std::string getTime(int index) const;
		std::string getLocation(int index) const;
		int getPriority(int index) const;

		const Todo& getTodo(int index) const;
		const std::vector<Todo>& getAllTodos() const;

		bool isEmpty() const;

		void clear();

	private:
		std::vector<Todo> todoList; //consider map<int, Todo>?

};

#endif // !TODOLIST_H

