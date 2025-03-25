## **LoopProject**

A C++ project that demonstrates loops, unit testing with **GoogleTest**, and build automation using **CMake** and **Ninja**.

### **\ud83d\ude80 Getting Started**

#### **1\ufe0f\u20e3 Prerequisites**

Ensure you have the following installed:

- C++ Compiler (`g++` or `clang`)
- [CMake](https://cmake.org/download/) (version 3.10+ recommended)
- [Ninja](https://ninja-build.org/)
- [GoogleTest](https://github.com/google/googletest)

#### **2\ufe0f\u20e3 Clone the Repository**

```sh
git clone https://github.com/yourusername/LoopProject.git
cd LoopProject
```

#### **3\ufe0f\u20e3 Build the Project**

```sh
mkdir build && cd build
cmake .. -G "Ninja"
ninja
```

#### **4\ufe0f\u20e3 Run the Executable**

```sh
./LoopProgram.exe
```

---

## **\ud83d\udee0\ufe0f Running Tests**

Unit tests are implemented using **GoogleTest**.

### **Run All Tests**

```sh
./LoopTest.exe
```

or using **CTest**:

```sh
ctest --verbose
```

### **Run Specific Tests**

```sh
ctest -R LoopTest --verbose
```

---

## **\ud83d\udcc1 Project Structure**

```
LoopProject/
│── src/               # Source code
│   ├── Loop.cpp       # Main program logic
│   ├── Loop.h         # Header file
│── test/              # GoogleTest unit tests
│   ├── LoopTest.cpp   # Test cases
│── CMakeLists.txt     # CMake build script
│── README.md          # Project documentation
│── build/             # Generated build files (after running CMake)
│── LoopProgram.exe    # Executable output
│── LoopTest.exe       # Test executable
```

---

## **\ud83d\udccc Example Output**

```
$ ./LoopProgram.exe
Number of rows: 5
*11 *12 *13 *14 *15
*21 *22 *23 *24 *25
*31 *32 *33 *34 *35
*41 *42 *43 *44 *45
*51 *52 *53 *54 *55
```

---

## **\ud83d\udccc Notes**

- Make sure **GoogleTest** is installed and linked correctly.
- Use `ninja clean` to remove old builds before recompiling.

---
