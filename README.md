# Todo List (C++ Console)

A simple command-line application for managing tasks.

---

## Design Goals
- Provide an easy-to-use console interface for managing tasks
- Practice object-oriented programming design
- Practice building systems that separate application logic from user I/O

---

## Features
- Add, view, delete, and edit tasks
- Save and load tasks from a local text file
- Format and display tasks
- Modular class structure

---

## Tech Stack
- Programming Language: C++
- IDE: Visual Studio

---

## How to Build and Run
### Windows (Visual Studio)
1. Clone the repository:
   ```bash
   git clone https://github.com/PVAT1187/TodoList_Application.git
2. Open TodoList.sln in Visual Studio
3. Build and run

### Command Line (if using g++)
1. Ensure you have g++ with C++17 support, then run:
   ```bash
   g++ -std=c++17 -o TodoList Main.cpp DataLoader.cpp Formatter.cpp Handler.cpp Interface.cpp Printer.cpp Todo.cpp TodoList.cpp
   ./TodoList
   ```
   
---

## Screenshots
<img width="418" height="724" alt="Screenshot 2025-10-10 112257" src="https://github.com/user-attachments/assets/316491f5-a473-42e9-8ecf-ca1f26b1993f" />
<img width="328" height="190" alt="Screenshot 2025-10-10 112538" src="https://github.com/user-attachments/assets/553ffc63-318e-439a-8e63-153c5f6927ee" />
<img width="420" height="517" alt="Screenshot 2025-10-10 112350" src="https://github.com/user-attachments/assets/0aa2b938-2f0c-4c34-817f-b29f19e1aa15" />
