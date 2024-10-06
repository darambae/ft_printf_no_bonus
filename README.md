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

ft_printf is a custom implementation of the standard C library function `printf`. This project is part of the 42 school curriculum, designed to deepen understanding of variadic functions, formatted output, and overall C programming skills.

ft_printf est une implémentation personnalisée de la fonction de bibliothèque standard C `printf`. Ce projet fait partie du programme de l'école 42, conçu pour approfondir la compréhension des fonctions variadiques, de la sortie formatée et des compétences en programmation C.

ft_printf는 표준 C 라이브러리 함수 `printf`의 맞춤 구현입니다. 이 프로젝트는 42 학교 커리큘럼의 일부로, 가변 인수 함수, 형식화된 출력 및 전반적인 C 프로그래밍 기술에 대한 이해를 깊게 하기 위해 설계되었습니다.

---

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