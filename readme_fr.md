
# ft_printf

## Table des matières

  - [Introduction](#introduction)
  - [Fonctionnalités](#fonctionnalités)
  - [Installation](#installation)
  - [Liste des fonctions](#liste-des-fonctions)
  - [Structure du projet](#structure-du-projet)

---

## Introduction

**ft_printf** est un projet en C qui vise à reproduire la fonctionnalité de la fonction standard `printf` de la bibliothèque standard C. Cette implémentation personnalisée prend en charge divers spécificateurs de format, permettant de formater des chaînes de caractères, des entiers, des nombres à virgule flottante et d'autres types de données. L'objectif de **ft_printf** est d'approfondir votre compréhension des listes d'arguments variables et de la manipulation de chaînes en C, tout en offrant une méthode flexible pour produire des sorties formatées.


## Fonctionnalités

- Implémentation personnalisée de la fonction `printf`.
- Prend en charge divers spécificateurs de format tels que `%d`, `%s`, `%x`, etc.
- Gère les arguments variables en utilisant `va_list`.

---

## Installation

Pour installer **ft_printf**, clonez le dépôt et compilez le code en utilisant `make` :

```
git clone https://github.com/darambae/ft_printf_no_bonus.git
cd ft_printf
make
```

---

## Liste des fonctions

- `ft_printf` - Implémentation personnalisée de la fonction `printf`.
- `ft_print_char` - Écrit un caractère sur la sortie standard.
- `ft_print_str` - Écrit une chaîne sur la sortie standard.
- `ft_print_int` - Écrit un nombre entier sur la sortie standard.
- `ft_print_hex` - Écrit un nombre hexadécimal sur la sortie standard.
- `ft_print_unsigned` - Écrit un nombre entier non signé sur la sortie standard.
- `ft_print_pointer` - Écrit une adresse de pointeur sur la sortie standard.

---

## Structure du projet

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

---
