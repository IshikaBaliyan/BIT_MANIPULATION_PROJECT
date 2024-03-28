# BIT_MANIPULATION_PROJECT
This project focuses on exploring and implementing various bit manipulation techniques using the C programming language. Bit manipulation involves the use of bitwise operators to manipulate individual bits within a data structure, such as integers. This project aims to provide a hands-on experience with bit manipulation, helping programmers understand the intricacies of binary representation and bitwise operations.

## Goals

The primary goals of this project are:

1. *Understanding Bitwise Operators*: Gain a solid grasp of bitwise operators like AND (`&&`), OR (`||`), XOR (`^`), left shift (`<<`), and right shift (`>>`).

2. *Manipulating Individual Bits*: Learn how to set, clear, toggle, and check individual bits within a number.

3. *Efficient Coding Techniques*: Explore techniques to optimize code using bitwise operations, particularly in scenarios like flag management, counting set bits, etc.

4. *Binary Representation*: Develop a deeper understanding of binary representation and how it relates to data storage and manipulation.

## Specifications

The project will cover the following key areas:

1. *Bitwise Operators*: Explanation and examples of bitwise operators and their applications.

2. *Bitwise Shifts*: Detailed guide on left and right shifts, including signed vs. unsigned shifts.

3. *Bit Manipulation Functions*: Implementation of functions for setting, clearing, toggling, and checking specific bits.

4. *Bit Hacks*: A collection of useful bit manipulation hacks to solve common programming problems efficiently.

5. *Bitwise Applications*: Practical examples of bit manipulation in various scenarios, such as optimizing memory usage and creating compact data structures.

GetbitAt = gives the bit value at a specified index

SetbitAt = sets the bit at an specified index 

ClearbitAt = clears the bit at spefic index (sets the bit to 0)

Xorfrom1ton = calculate the xor from 1 to the number specified 

Countsetbits = count the number of set bits in a number 

Powerof2 = checks if a number is a power of 2 or not 

Mostsigbitnum = gives the number at most significant bit in a number

Alternatepattern = checks if the bits of a number are in an alternate pattern i.e 10101010

## Design

├── src
│ ├── sample_program.c # Main program showcasing various bit manipulation techniques
│ ├── header.h # Header file containing function declarations and macros
│ ├── lib.c # Implementation of bit manipulation functions
└── README.md # Project documentation (this file)
 
 To execute your C project that uses the Bit Manipulation Library, follow these steps:

**Step 1: Clone the Repository**
If you haven't already, clone the repository to your local machine. You can do this using the following command in your terminal:

```bash
git clone https://github.com/IshikaBaliyan/BIT_MANIPULATION_PROJECT.git
```

**Step 2: Navigate to the Project Directory**
Change your current working directory to the project folder:

```bash
cd BIT_MANIPULATION_PROJECT
```

**Step 3: Compile the Project**
Compile your C project, ensuring that you link it with the `bit_manipulation.c` source file. You'll also need to include the `bit_manipulation.h` header file in your source code. Here's an example compilation command:

```bash
gcc -o my_program my_program.c bit_manipulation.c -lm
```

- `my_program` is the name of the output executable.
- `my_program.c` is the name of your C source code file that uses the Bit Manipulation Library.
- `bit_manipulation.c` contains the library functions.
- `-lm` is used to link the math library (only required if you use math functions).

**Step 4: Run the Executable**
After successful compilation, you can run your program:

```bash
./my_program
```

Replace `my_program` with the name you provided in the compilation step.

**Step 5: Observe the Output**
Your program should now run, and any output or results should be displayed in the terminal.

Make sure to customize `my_program.c` to include the specific bit manipulation operations you want to perform using the library's functions. You can also modify the example code from the previous response and save it as `my_program.c` for testing and experimentation.

Ensure that you have a C compiler like GCC installed on your system to compile and run C programs.
