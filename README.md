# Arithmetic-Logic-Unit-Libary-for-C-
This is a C++ library for Arithmetic Logic Units. The library is intended for students of Arithmetic Logic Units and includes basic gates and functions such as s_switch (one-way gate), NOT_GATE, AND_GATE, etc. This is a basic library, not intended for advanced users, providing simulation tools in C++.

# Library Installation Guide

**Step 1**: Download the repository to your computer as a `.zip` file.

**Step 2**: Extract the files.

**Step 3**: Navigate to the `include` folder within the extracted files and copy the three files located there.

**Step 4**: Paste the three copied files into the folder containing the project where you intend to use the library.


**Note: Since this is not an official library, you must include it using double quotes. As this is a C++ library, it cannot be used with other programming languages.**

Usage Example:
``` cpp
#include <iostream>
#include "GATE.h"

using namespace std;

int main() {
    cout << "AND: " << AND_GATE(true, true) << endl;
    cout << "OR: " << OR_GATE(true, false) << endl;
    return 0;
}

```

# Functions included in the library.

1. bool s_switch(bool s);
2. bool NOT_GATE(bool s);
3. bool AND_GATE(bool a, bool b);
4. bool OR_GATE(bool a, bool b);
5. bool NAND_GATE(bool a, bool b);
6. bool NOR_GATE(bool a, bool b);
7. bool XOR_GATE(bool a, bool b);
8. bool XNOR_GATE(bool a, bool b);
