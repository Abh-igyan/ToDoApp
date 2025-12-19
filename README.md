# ToDoApp - C++ CLI Task Manager

A lightweight, object-oriented command-line application built with Modern C++ to manage daily tasks. This project serves as a foundation for understanding C++ project structure, CMake build systems, and Object-Oriented Programming (OOP) principles.



## 🚀 Features
* **Task Management:** Create, list, and track the status of your tasks.
* **Modular Architecture:** Separated into `Task` and `TaskList` components for high maintainability.
* **Modern C++:** Utilizes C++17 standards and STL containers (`std::vector`).
* **Cross-Platform Build:** Managed via CMake for easy compilation on Linux (Ubuntu/Xubuntu), macOS, and Windows.

## 🛠️ Technical Skills Demonstrated
* **Object-Oriented Design:** Encapsulation of data within classes and clear separation of header (`.h`) and implementation (`.cpp`) files.
* **Build Systems:** Hands-on experience with **CMake** for managing multi-file builds.
* **Version Control:** Managed with **Git**, following professional commit conventions.
* **CLI UX:** Implementing a robust user-input loop with error handling for non-integer inputs.

## 📋 Prerequisites
To build this project, you need:
* A C++ compiler (e.g., GCC/G++ or Clang)
* CMake (version 3.10 or higher)

## 🏗️ How to Build and Run
1. **Clone the repository:**
   ```bash
   git clone [https://github.com/YOUR-USERNAME/ToDoApp.git](https://github.com/YOUR-USERNAME/ToDoApp.git)
   cd ToDoApp
2. **Generate build files and compile:**

   Bash
   
   mkdir build && cd build
   cmake ..
   cmake --build .
   
   Run the application:
   Bash
   ./todo

🗺️ Project Roadmap
[x] Basic Task and TaskList classes

[x] Interactive Terminal Menu

[ ] Persistence (Saving tasks to a .txt or .dat file)

[ ] Due dates and Priority levels

[ ] Search functionality

📄 License
This project is open-source and available under the MIT License.


---

### How to update this on GitHub:

1.  **Save the file:** Create `README.md` in your main `ToDoApp` folder.
2.  **Add and Commit:**
    ```bash
    git add README.md
    git commit -m "docs: Add professional README with build instructions"
    ```
3.  **Push to GitHub:**
    ```bash
    git push
    ```
