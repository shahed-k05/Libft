*This activity has been created as part of the 42 curriculum by syasin.*

# Libft Project

## Description
Libft is a C library created as part of the 42 curriculum.  
Its goal is to reimplement standard C library functions and provide basic utilities for strings, memory, characters, and linked lists.  
The library helps understand **pointers, memory management, and low-level C programming**.

## Library Details
The static library `libft.a` contains functions for:  
- Character checks and conversions (`ft_isalpha`, `ft_isdigit`, `ft_toupper`, etc.)  
- String manipulation (`ft_strlen`, `ft_strlcpy`, `ft_strjoin`, `ft_split`, etc.)  
- Memory operations (`ft_memset`, `ft_memcpy`, `ft_memchr`, etc.)  
- Conversions (`ft_atoi`, `ft_itoa`, `ft_calloc`)  
- File descriptor output (`ft_putchar_fd`, `ft_putstr_fd`, etc.)  
- Singly linked lists (`ft_lstnew`, `ft_lstadd_front`, `ft_lstmap`, etc.)

## Instructions
To compile the library, utilize the following command:
```bash
make
```
Clean object files:
```bash
make clean
```
Remove everything including the library:
```bash
make fclean
```
Rebuild:
```bash
make re
```
## Resources
the following resources were used as references while working on this project:- **man pages (Linux manual)**
  - man strlen, man strlcat, man memcpy, man memmove, man atoi, etc.
  Used to understand the exact behavior, return values, and edge cases of standard C functions.- **The C Programming Language – Brian W. Kernighan & Dennis M. Ritchie**
  A classic reference for understanding core C concepts such as pointers, memory management, and strings.- **42 Documentation**
  - Libft subject PDF
  - 42 Norm (coding style rules)
  Used to ensure compliance with project requirements and coding standards.- **cplusplus.com**
  https://cplusplus.com/reference/cstring/
  Used to review function behavior and examples for string and memory functions.- **GeeksforGeeks**
  https://www.geeksforgeeks.org/c-programming-language/
  Used for additional explanations and edge case discussions related to C functions and linked lists.AI assistance was used as a **learning and support tool** during this project.Specifically, AI was used to:
- Explain the behavior of C standard library functions (e.g., `strlcat`, `memmove`, `strnstr`)
- Clarify edge cases and common pitfalls
- Help understand linked list concepts in the bonus part
- Review logic and provide suggestions for cleaner and more readable implementations
- Assist in debugging and understanding compiler warningsAI was **not used to blindly generate solutions**.
All code was manually written, reviewed, and adapted by the student to fully comply with the 42 Norm and project requirements.The use of AI contributed to better understanding, not replacement of personal work.
# Libft
