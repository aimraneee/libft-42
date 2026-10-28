*This project has been created as part of the 42 curriculum by alamouad.*

# Libft

## Description
Libft is a C library that reimplements standard libc functions and adds
extra string, output and linked-list utilities, to be reused in later projects.
The project is divided into three parts:
- Part 1, libc functions.
- Part 2, additional functions.
- Part 3, linked lists.

## Instructions
- Compilation: `make` builds `libft.a` (flags `-Wall -Wextra -Werror`, archive created with `ar`).
- Other rules: `make clean`, `make fclean`, `make re`.
- Usage: include `libft.h` in your code and compile with `cc main.c libft.a`.

## Resources
- References: the man pages (`man 3 string`, `man 3 malloc`, `man 3 strlcpy`, ...).
- Use of AI: AI was used to generate test cases and run them against the library
  (all parts), to get explanations about some functions.It was not used to write the library functions.

## Library description
**Part 1, libc functions :**
- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`.
- Case conversion: `ft_toupper`, `ft_tolower`.
- Strings: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`,
  `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_atoi`.
- Memory: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`,
  `ft_memcmp`, `ft_calloc`.

**Part 2, additional functions :**
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`: build new strings (allocated with `malloc`).
- `ft_strmapi`, `ft_striteri`: apply a function to each character of a string.
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: write to a file descriptor.

**Part 3, linked lists :**
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`: create and add nodes.
- `ft_lstsize`, `ft_lstlast`: inspect a list.
- `ft_lstdelone`, `ft_lstclear`: free one node or a whole list with a `del` function.
- `ft_lstiter`, `ft_lstmap`: apply a function to every node's content.
