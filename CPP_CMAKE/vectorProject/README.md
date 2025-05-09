# VectorProject

`vectorProject` is a simple C++ project demonstrating basic usage of the C++ Standard Library's `std::vector` and showcasing a modular project structure with separate header (`.hpp`) and implementation (`.cpp`) files.

## Project Structure

The project is organized as follows:

## Prerequisites

- **CMake** (version 3.10 or higher)
- **C++ Compiler** (e.g., Visual Studio, GCC, or Clang)
- **Build Tool** (like Ninja or Visual Studio Build Tools)

## Building the Project

To build the project, follow these steps:

1. **Navigate to Project Directory**:
   Open a terminal or command prompt and navigate to the root directory of `vectorProject`.

2. **Create a Build Directory**:
   Run the following commands to create a `build` directory and navigate into it:
   ```bash
   mkdir build
   cd build
3. **Configure the Project: Use CMake to configure the project**:
 For example:
 ```bash
  cmake -G "Visual Studio 16 2019" ..      # For Visual Studio on Windows
  cmake -G "Ninja" ..                       # Or Ninja, if you have it installed

4. **Build the Project: Run the following command to build the project**:
  ```bash
  cmake --build . --config Release

5. **Install the Project (Optional): To install the project to a specific location, use**:
```bash
  cmake --install . --prefix "C:/Program Files/vectorProject"

## Running the Executable

1.Open a terminal or command prompt.
2.Navigate to the build/Release directory
  ```bash
  cd build/Release
3.Run the executable
  ```bash
  vectorProject.exe

## Code Explanation
1.include/my_vector.hpp: Contains the declaration for printVector, which takes a vector of integers and prints each element.

2.src/my_vector.cpp: Implements printVector function, iterating over the vector and outputting each element.

3.src/main.cpp: Creates a vector, populates it with sample elements, and calls printVector to display them


