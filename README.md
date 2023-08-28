# BIT_MANIPULATION_PROJECT
This project focuses on exploring and implementing various bit manipulation techniques using the C programming language. Bit manipulation involves the use of bitwise operators to manipulate individual bits within a data structure, such as integers. This project aims to provide a hands-on experience with bit manipulation, helping programmers understand the intricacies of binary representation and bitwise operations.

## Goals

The primary goals of this project are:

1. *Understanding Bitwise Operators*: Gain a solid grasp of bitwise operators like AND (`&`), OR (`|`), XOR (`^`), left shift (`<<`), and right shift (`>>`).

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
