# ft_printf
### Languages

- [French version](./readme_fr.md)
- [Korean version](./readme_kr.md)

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Functions List](#functions-list)
- [Project Structure](#project-structure)

---

## Introduction

**ft_printf** is a C project designed to recreate the functionality of the standard `printf` function found in the C standard library. This custom implementation supports a variety of format specifiers, allowing for the formatting of strings, integers, floating-point numbers, and other data types. The goal of **ft_printf** is to deepen your understanding of variable argument lists and string manipulation in C while providing a flexible way to produce formatted output.

## Features

- Custom implementation of the `printf` function.
- Supports various format specifiers such as `%d`, `%s`, `%x`, etc.
- Handles variable arguments using `va_list`.

---

## Installation

To install **ft_printf**, clone the repository and compile the code using `make`:

```
git clone https://github.com/darambae/ft_printf_no_bonus.git
cd ft_printf
make
```

---

## Functions List

- `ft_printf` - Custom implementation of the `printf` function.
- `ft_print_char` - Writes a character to the standard output.
- `ft_print_str` - Writes a string to the standard output.
- `ft_print_int` - Writes an integer to the standard output.
- `ft_print_hex` - Writes a hexadecimal number to the standard output.
- `ft_print_unsigned` - Writes an unsigned integer to the standard output.
- `ft_print_pointer` - Writes a pointer address to the standard output.

---

## Project Structure

```
ft_printf/
│
├── ft_printf.c
├── ft_print_char.c
├── ft_print_str.c
├── ft_print_int.c
├── ft_print_hex.c
├── ft_print_unsigned.c
├── ft_print_pointer.c
├── ft_printf.h
├── Makefile
└── README.md
```
