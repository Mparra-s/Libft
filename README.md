# 📚 Libft
## Description

Libft is a custom implementation of a set of standard C library functions, developed as part of the 42 curriculum.
The goal of this project is to gain a deep understanding of how basic C functions work internally, while building a reusable library that can be used in future projects.

All functions are written in C and follow the constraints and norms defined by 42.

This library is intended to be expanded and reused throughout the 42 cursus.
Its implementation focuses on clarity, correctness, and robustness rather than optimization.

<br/>

## Project Objectives

  - Reimplement standard C library functions from <ctype.h>, <string.h>, <stdlib.h>, and <unistd.h>

  - Understand memory management and pointer manipulation

  - Build a static library (libft.a)

  - Learn how to design clean, reusable, and well-structured code

<br/>

## Norms and Constraints

  - Written in C

  - Compliant with the 42 Norm

  - No forbidden functions

  - No memory leaks

<br/>

## Library Structure

The library is divided into several parts:

  - Part 1 – Libc Functions

    Reimplementations of common libc functions, such as:

    - ft_strlen

    - ft_memset

    - ft_bzero

    - ft_memcpy

    - ft_strlcpy

    - ft_strlcat

    - ft_strncmp

    - ft_atoi

    - ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint

    - ft_toupper, ft_tolower

  <br/>

  - Part 2 – Additional Functions

    Utility functions not present in libc but useful for later projects:

    - ft_substr

    - ft_strjoin

    - ft_strtrim

    - ft_split

    - ft_itoa

    - ft_strmapi

    - ft_striteri

    - ft_putchar_fd

    - ft_putstr_fd

    - ft_putendl_fd

    - ft_putnbr_fd
   
  <br/>

  - Bonus Part – Linked Lists

    Functions to manipulate singly linked lists using the following structure:

  ```c
  typedef struct s_list
  {
      void            *content;
      struct s_list   *next;
  }   t_list;
  ```
  Bonus functions include:

  - ft_lstnew

  - ft_lstadd_front

  - ft_lstadd_back

  - ft_lstsize

  - ft_lstlast

  - ft_lstdelone

  - ft_lstclear

  - ft_lstiter

  - ft_lstmap

<br/>

## Compilation

To compile the library, run:

```bash
make
```
This will generate the static library file:
```text
libft.a
```
Additional rules:
```bash
make clean     # Removes object files
make fclean    # Removes object files and libft.a
make re        # Recompiles the library
```
<br/>

## Usage

In order to use the functions of the Libft you have to include the header file in your project:
```c
#include "libft.h"
```
