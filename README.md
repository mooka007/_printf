# _printf

A custom implementation of the C standard library function `printf`.  
This project replicates the functionality of `printf`, handling formatted output for characters, strings, numbers, hexadecimal values, and memory addresses.

---

## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Files](#files)
- [Examples](#examples)
- [Contributors](#contributors)
- [License](#license)

---

## Installation
Clone the repository and compile the library using the provided Makefile:

```bash
git clone https://github.com/mooka007/_printf.git
cd _printf
make
```

Usage

Include the header in your C file:

#include "ft_printf.h"

Compile your program with:

gcc your_program.c ft_printf.c -o your_program


Features

Handles:
%c : Character
%s : String
%d / %i : Signed integer
%u : Unsigned integer
%x / %X : Hexadecimal
%p : Pointer address
%% : Percent sign

Files

ft_printf.c – Core printf implementation
ft_printf.h – Header file with function prototypes
ft_putchar.c – Print a single character
ft_putstr.c – Print a string
ft_putnbr.c – Print signed numbers
ft_unbrput.c – Print unsigned numbers
hex_convert.c – Handle hexadecimal conversion
ft_putaddr.c – Print memory addresses

Makefile – Build automation

Examples: 

#include "ft_printf.h"

int main(void)
{
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello");
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Unsigned: %u\n", 300);
    ft_printf("Hex: %x\n", 255);
    ft_printf("Pointer: %p\n", (void *)0x1234abcd);
    return 0;
}

Output:

Character: A
String: Hello
Decimal: 42
Unsigned: 300
Hex: ff
Pointer: 0x1234abcd


//////////////////////////////////////////////




Custom _printf
A custom implementation of the C standard library function printf.

This project replicates the functionality of printf, handling formatted output for characters, strings, signed and unsigned integers, hexadecimal values, and memory addresses. It is a group collaboration that helped us gain a deeper understanding of variadic functions and file I/O in C.

🛠️ Table of Contents
Installation

Usage

Features

File Structure

Examples

Contributors

License

🚀 Installation
To get started, clone the repository to your local machine and compile the library using the provided Makefile.

git clone [https://github.com/mooka007/_printf.git](https://github.com/mooka007/_printf.git)
cd _printf
make

💻 Usage
To use this library in your own C program, simply include the header file and compile your program with the library's source files.

Include the header:
#include "ft_printf.h"

Compile your program:
gcc your_program.c ft_printf.c -o your_program

✨ Features
Our custom _printf handles the following format specifiers:

%c: Prints a single character.

%s: Prints a string.

%d / %i: Prints a signed integer.

%u: Prints an unsigned integer.

%x / %X: Prints a number in lowercase or uppercase hexadecimal format.

%p: Prints a memory address.

%%: Prints a literal percent sign.

📂 File Structure
The repository is organized as follows:

ft_printf.c: The core printf implementation.

ft_printf.h: The header file containing function prototypes.

ft_putchar.c: Helper function to print a single character.

ft_putstr.c: Helper function to print a string.

ft_putnbr.c: Helper function to print signed integers.

ft_unbrput.c: Helper function to print unsigned integers.

hex_convert.c: Helper function to handle hexadecimal conversions.

ft_putaddr.c: Helper function to print memory addresses.

Makefile: The build automation script to compile the library.

💡 Examples
Here's an example of how to use _printf in your code:

#include "ft_printf.h"

int main(void)
{
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello, World!");
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Unsigned: %u\n", 300);
    ft_printf("Hex: %x\n", 255);
    ft_printf("Pointer: %p\n", (void *)0x1234abcd);
    ft_printf("Percent sign: %%\n");

    return (0);
}

Expected Output:

Character: A
String: Hello, World!
Decimal: 42
Unsigned: 300
Hex: ff
Pointer: 0x1234abcd
Percent sign: %

🤝 Contributors
Mookal - GitHub Profile

📜 License
This project is licensed under the MIT License.
