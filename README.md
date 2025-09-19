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




🤝 Contributors
Mookal - GitHub Profile

📜 License
This project is licensed under the MIT License.
