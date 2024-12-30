### **1. Install Required Tools**

#### **Step 1: Install Xcode Command Line Tools**

Open a terminal and run:

```bash
xcode-select --install
```

- This installs `clang` (C++ compiler) and other necessary tools.

#### **Step 2: Install Visual Studio Code Extensions**

- Open Visual Studio Code.
- Install the **C/C++ extension** from Microsoft:
  1.  Go to the Extensions View (`Cmd+Shift+X`).
  2.  Search for `C/C++` and install the extension by Microsoft.

#### **Step 3: Install a Debugger**

- macOS uses `lldb` for debugging.
- This is usually included with Xcode Command Line Tools. Verify by running:
  ```bash
  lldb --version
  ```

---

### **2. Setup Your C++ Project**

#### **Step 1: Create a Folder for Your Project**

Example folder structure:

```
MyCppProject/
├── main.cpp
```

#### **Step 2: Create a Simple Program**

Write a basic program in `main.cpp`:

```cpp
#include <iostream>
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

#### **Step 3: Open the Folder in VS Code**

- Open the `MyCppProject` folder in VS Code.

---

### **3. Build**

#### **Step 1: Build the Project**

- Press `Cmd+Shift+B` to run the "Build C++" task.
- Verify that a `main` executable is created in your project folder.

---

### **4. Run the Compiled Program**

After successful compilation, run the program:

```bash
./output_file_name
```

Example:

```bash
./my_program
```

This will output:

```
Hello, World!
```

---

### **5. Common Errors and Fixes**

#### **Error: `clang++` Not Found**

- Ensure Xcode Command Line Tools are installed:
  ```bash
  xcode-select --install
  ```

#### **Debugger Fails to Start**

- Verify `lldb` is installed by running:
  ```bash
  lldb --version
  ```

#### **Compilation Warnings or Errors**

- Open the **Terminal** (`Ctrl+` `)` in VS Code.
- Manually compile and check for errors:
  ```bash
  clang++ -std=c++17 -g main.cpp -o main
  ./main
  ```

---
