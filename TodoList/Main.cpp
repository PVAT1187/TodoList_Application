#include "TodoList.h"
#include "Printer.h"
#include "Interface.h"
#include "DataLoader.h"

#include <iostream>

using namespace std;

int main()
{
    TodoList todoList;
    DataLoader::loadTodo(todoList, "todolist.txt");

    processMenu(todoList);

    DataLoader::saveTodo(todoList, "todolist.txt");

    cout << endl << endl;
    system("Pause");
    return 0;
}