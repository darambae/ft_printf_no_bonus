# ft_printf

## Table of Contents

- [ft\_printf](#ft_printf)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Feature](#feature)
  - [Installation](#installation)
  - [Functions List](#functions-list)
    - [English](#english)
    - [Français](#français)
    - [한국어](#한국어)
  - [Project Structure](#project-structure)
    
## Introduction
Here’s a more natural-sounding introduction for the **ft_printf** project in English, French, and Korean:

**ft_printf** is a C project designed to recreate the functionality of the standard `printf` function found in the C standard library. This custom implementation supports a variety of format specifiers, allowing for the formatting of strings, integers, floating-point numbers, and other data types. The goal of **ft_printf** is to deepen your understanding of variable argument lists and string manipulation in C while providing a flexible way to produce formatted output.

**ft_printf** est un projet en C qui vise à reproduire la fonctionnalité de la fonction standard `printf` de la bibliothèque standard C. Cette implémentation personnalisée prend en charge divers spécificateurs de format, permettant de formater des chaînes de caractères, des entiers, des nombres à virgule flottante et d'autres types de données. L'objectif de **ft_printf** est d'approfondir votre compréhension des listes d'arguments variables et de la manipulation de chaînes en C, tout en offrant une méthode flexible pour produire des sorties formatées.

**ft_printf**는 C 프로젝트로, C 표준 라이브러리에 있는 표준 `printf` 기능을 재현하는 것을 목표로 합니다. 이 사용자 정의 구현은 문자열, 정수, 부동 소수점 숫자 및 기타 데이터 유형의 형식을 지정할 수 있는 다양한 형식 지정자를 지원합니다. **ft_printf**의 목표는 C에서 가변 인수 목록과 문자열 조작에 대한 이해를 깊게 하면서 형식화된 출력을 생성할 수 있는 유연한 방법을 제공하는 것입니다.

## Feature

- Custom implementation of the `printf` function.
- Supports various format specifiers such as `%d`, `%s`, `%x`, etc.
- Handles variable arguments using `va_list`.
<br><br>
- Implémentation personnalisée de la fonction `printf`.
- Prend en charge divers spécificateurs de format tels que `%d`, `%s`, `%x`, etc.
- Gère les arguments variables en utilisant `va_list`.
<br><br>
- `printf` 함수의 맞춤 구현.
- `%d`, `%s`, `%x` 등 다양한 형식 지정자를 지원.
- `va_list`를 사용하여 가변 인수를 처리.

---

## Installation

        git clone https://github.com/darambae/ft_printf.git
        cd ft_printf
        make
---

## Functions List

### English
- `ft_printf` - Custom implementation of the `printf` function.
- `ft_print_char` - Writes a character to the standard output.
- `ft_print_str` - Writes a string to the standard output.
- `ft_print_int` - Writes an integer to the standard output.
- `ft_print_hex` - Writes a hexadecimal number to the standard output.
- `ft_print_unsigned` - Writes an unsigned integer to the standard output.
- `ft_print_pointer` - Writes a pointer address to the standard output.

### Français
- `ft_printf` - Implémentation personnalisée de la fonction `printf`.
- `ft_print_char` - Écrit un caractère sur la sortie standard.
- `ft_print_str` - Écrit une chaîne sur la sortie standard.
- `ft_print_int` - Écrit un nombre entier sur la sortie standard.
- `ft_print_hex` - Écrit un nombre hexadécimal sur la sortie standard.
- `ft_print_unsigned` - Écrit un nombre entier non signé sur la sortie standard.
- `ft_print_pointer` - Écrit une adresse de pointeur sur la sortie standard.

### 한국어
- `ft_printf` - `printf` 함수의 맞춤 구현.
- `ft_print_char` - 표준 출력에 문자를 씀.
- `ft_print_str` - 표준 출력에 문자열을 씀.
- `ft_print_int` - 표준 출력에 정수를 씀.
- `ft_print_hex` - 표준 출력에 16진수를 씀.
- `ft_print_unsigned` - 표준 출력에 부호 없는 정수를 씀.
- `ft_print_pointer` - 표준 출력에 포인터 주소를 씀.

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