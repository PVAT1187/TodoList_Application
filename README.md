# Todo List (C++ Console Application)

A simple command-line Todo List application built in C++ using Visual Studio.  
This project demonstrates object-oriented programming, file handling, and modular project design.

---

## Design Overview
This project was created to explore how a modular C++ application can manage user data efficiently while keeping logic and presentation separate. The goal was to create a flexible Todo List system that can be easily extended and maintained
   - Task Management: Allows adding, editing, viewing, and deleting tasks via a console interface
   - Persistence: Saves tasks to a local file and loads them on startup
   - Modular Design: Separate classes handle data management, user input, formatting, and display, ensuring maintainable         and reusable code

---

## Design Goals
- Provide an easy-to-use console interface for managing tasks
- Practice object-oriented programming principles
- Separate data logic from UI to support future expansion
- Ensure clarity through formatted task display

---

## How to Build and Run
### Windows (Visual Studio)
1. Clone the repository:
   ```bash
   git clone https://github.com/PVAT1187/TodoList_Application.git
2. Open TodoList.sln in Visual Studio
3. Build and run

### Command Line (if using g++)
1. Ensure you have g++ with C++17 support:
2. Copy the code below:
  ```bash
  g++ -std=c++17 -o TodoList Main.cpp DataLoader.cpp Formatter.cpp Handler.cpp Interface.cpp Printer.cpp Todo.cpp TodoList.cpp
  ./TodoList
  ```
---

## Usage
<img width="418" height="724" alt="Screenshot 2025-10-10 112257" src="https://github.com/user-attachments/assets/316491f5-a473-42e9-8ecf-ca1f26b1993f" />
<img width="328" height="190" alt="Screenshot 2025-10-10 112538" src="https://github.com/user-attachments/assets/553ffc63-318e-439a-8e63-153c5f6927ee" />
<img width="420" height="517" alt="Screenshot 2025-10-10 112350" src="https://github.com/user-attachments/assets/0aa2b938-2f0c-4c34-817f-b29f19e1aa15" />

---

## Features
- Add, view, delete, and edit tasks directly from the console
- Save and load tasks from a local text file
- Modular structure with separate classes for handling data, input, and display
- Format and display tasks with clear output

---

## Tech Stack
- Programming Language: C++
- Standard Template Library (STL)
- Concepts: Object-Oriented Programming, File I/O, Modular Project Design
- IDE/Tools: Visual Studio, Git, GitHub

---

## Future Improvements
- Explore using different STL containers or data structures for efficiency
- Create a GUI version using wxWidgets or another C++ GUI library

---

## Author
**Vu Anh Thu Phan** - [GitHub](https://github.com/PVAT1187) 

