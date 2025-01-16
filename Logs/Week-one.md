# Day One:

## Topics Covered
1. **Introduction to C**
   - Learned about the origin of the C programming language.
   - Discussed its relevance and why it's important to learn.
   - Explored its influence on other programming languages.

2. **Key Features of C**
   - Low-level access to memory.
   - portability across different platforms.
   - Rich library support and built-in functions.
   - Simple syntax.
   - Imperative and procedural programming.
   - Supports structured programming concepts.

3. **C uses and applications**
   - System programming e.g. operating systems, drivers, etc.
   - Game development.
   - Embedded systems.
   - Compiler and interpreter design.

## Practical Work
- **Wrote a Hello World program in C**
   -Purpose: To understand the basic structure of a C program and the process of compilation and execution.
   - **Key Learnings:**
     - Syntax: The importance of including `stdio.h` for input/output functions.
     - Main function: The starting point of every C program.
     - Return value: The role of `return 0;` in signaling successful execution.

# Day Two:

## Topics covered
1. **Variables in C**
   - Learned and understood the concept of variables as placeholders for data.
   - Explored how to declare variables using appropriate data types (e.g., `int`, `float`, `char`).
   - Understood how to initialize variables with values.
   - Practiced printing the contents of variables using `printf`.

2. **Key Features of Variables**
   - Data Storage: Variables allow you to store data that can be used and modified during program execution.
   - Data Types: Each variable has a specific data type (e.g., `int`, `float`, `char`) that determines the type of data it can hold.
   - Declaration: Variables must be declared before use, specifying the data type and optionally assigning an initial value.
   - Initialization: Assigning a value to a variable at the time of declaration.
   - Memory Allocation: When declared, variables are allocated memory in the system to hold their data.
   - Scope: Variables have a specific scope (local or global) that determines where they can be accessed in the program.

3. **Uses and Applications of Variables**
   - Storing Data: Variables are used to store user inputs, intermediate computations, and final results.
   - Dynamic Changes: Enable programs to adapt dynamically by allowing values to change during execution.
   - Control Logic: Variables are often involved in loops, conditional statements, and logic controls.
   - Mathematical Operations: Perform arithmetic and logical operations using variables as operands.
   - Data Sharing: Facilitate data transfer between different parts of a program.
   - Interactive Programs: Handle user inputs and display outputs effectively.

## Practical Work
   - Wrote a program declaring and intializing a variable of 'int' data type.
   - Declared multiple variables in a single line of code.
   - Initialized multiple variables in a single line of code.


# Day Three:

## Topics covered:
1. **Variable naming conventions**
   - Learnt about the guidelines for variable naming.
   - Understood why variables should be named properly.
   - Learnt specific conventions for variable names.
  
2. **Basic output function - printf**
   - Learnt and understood the purpose of the `printf` function.
   - grasped its basic syntax.
   - Learnt about the different format specifiers.
   - learnt about escape sequences. 
  
## Practical Work:
   - Wrote and executed a program utilizing what I've learned about the `printf` function.
   - Incorporated a basic math equation in C into my function.
   - Made use of a format specifier.
   - made use of strings to print a string constant.
  
# Day Four: 

## Topics covered
1. **Data type: Size of an integer**
- Learned about the size of an integer across various system architectures and compilers.
- Explored how to check the size of an integer using the `sizeof` operator.
- Understood the implications of integer size on memory usage and program portability.

2. **Binary number system**
- Studied the binary number system, its importance, and its role in computing.
- Understood how binary numbers are represented and their place values.
- Explored the range of values that can be represented in the binary system.

  
3. **Calculating the range of an integer**
- Differentiated between **signed** and **unsigned** integers.
- Learned how to calculate:
- The range of signed integers: `-2^(n-1)` to `2^(n-1) - 1`
- The range of unsigned integers: `0` to `2^n - 1`
- Where `n` is the number of bits used.


4. **Data types: Modifiers**
- Learned about modifiers such as `short`, `long`, and `long long`.
- Studied their respective ranges and how they affect the size of variables.
- Learned to use **format specifiers** to print values:
- `%ld` for `long`
- `%lld` for `long long`
- `%hd` for `short`

5. **`#Include <limit.h>`**
- Discovered how to use `<limits.h>` to access predefined macros for data type ranges.
- Examples include:
- `INT_MAX` and `INT_MIN` for the range of `int`.
- `LONG_MAX`, `LONG_MIN`, `SHRT_MAX`, etc., for other types.

## Practical Work:
   - Wrote a program To check the size of a data type.
   - wrote a program to check the various ranges of an integer.

# Day Five:

## Topics Covered:
### 1. **Exceeding the Range of an Integer**
- **Implications of Exceeding Integer Ranges**:
  - **Data Loss**: Unexpected truncation of values.
  - **Integer Overflow**: When a value exceeds the maximum range, it wraps around to the minimum range.
  - **Integer Underflow**: When a value goes below the minimum range, it wraps around to the maximum range.
  - **Undefined Behavior**: Unpredictable results depending on the compiler or platform.

- **How to Avoid Exceeding Integer Ranges**:
  1. **Choose the Right Data Type**:
     - Use `long` or `long long` for larger values.
     - Opt for unsigned types when only positive values are needed.
  2. **Check for Overflow**:
     - Use conditional checks before performing operations that might exceed the range.
  3. **Use Overflow Detection Functions**:
     - Leverage functions like `__builtin_add_overflow` (specific to GCC/Clang) to detect overflow.
  4. **Use Arbitrary-Precision Arithmetic**:
     - Libraries like GMP (GNU Multiple Precision Arithmetic Library) provide support for handling large numbers.

---

### 2. **Data Type: Char**
- **Overview**:
  - The `char` data type is used to store single characters.
  - It can also store small integer values since it occupies 1 byte (8 bits).

- **Size and Range**:
  - **Signed `char`**: Range of `-128 to 127`.
  - **Unsigned `char`**: Range of `0 to 255`.

- **Printable Characters**:
  - Includes standard characters like `A-Z`, `a-z`, `0-9`, and symbols (`@, $, %, etc.`).
  - Defined in the ASCII table, starting from decimal value 32 (`' '`) to 126 (`'~'`).

- **Non-Printable Characters**:
  - Control characters like `\n` (newline), `\t` (tab), `\b` (backspace), etc.
  - ASCII values range from 0 to 31 and 127.

## Practical Work:
   - Wrote a program to check the what happens when the range is exceeded.
   - Wrote a simple program to print a character on the console.
  
# Day Six:

