# Libft -- my own library

![makefile workflow](https://github.com/vincent-lafouasse/libft/actions/workflows/makefile.yml/badge.svg)

it ain't much but it's honest work

## List of functions

I: implemented, T: tested

### Libc

| I | T |  Functions  |
|---|---|-------------|
| x | x | [`ft_isalpha`](src/libc/ctype/ft_isalpha.c)  |
| x | x | [`ft_isdigit`](src/libc/ctype/ft_isdigit.c)  |
| x | x | [`ft_isalnum`](src/libc/ctype/ft_isalnum.c)  |
| x | x | [`ft_isascii`](src/libc/ctype/ft_isascii.c)  |
| x | x | [`ft_isprint`](src/libc/ctype/ft_isprint.c)  |
| x | x | [`ft_toupper`](src/libc/ctype/ft_toupper.c)  |
| x | x | [`ft_tolower`](src/libc/ctype/ft_tolower.c)  |
| x | x | [`ft_bzero`](/src/libc/strings/ft_bzero.c)  |
| x | x | [`ft_memset`](src/libc/string/ft_memset.c)  |
| x | x | [`ft_strlen`](src/libc/string/ft_strlen.c)  |
| x | ~ | [`ft_strchr`](src/libc/string/ft_strchr.c)  |
| x | ~ | [`ft_strrchr`](src/libc/string/ft_strrchr.c)  |
| x | ~ | [`ft_calloc`](src/libc/stdlib/ft_calloc.c)  |
| x | x | [`ft_atoi`](src/libc/stdlib/ft_atoi.c)  |
| x | O | [`ft_strlcpy`](src/libc/string/ft_strlcpy.c)  |
| x | ~ | [`ft_strdup`](src/libc/string/ft_strdup.c)  |
| x | ~ | [`ft_memcpy`](src/libc/string/ft_memcpy.c)  |
| x | ~ | [`ft_memcmp`](src/libc/string/ft_memcmp.c)  |
| x | ~ | [`ft_strncmp`](src/libc/string/ft_strncmp.c)  |
| x | ~ | [`ft_strlcat`]()  |
|   |   | [`ft_strnstr`]()  |
|   |   | [`ft_memchr`]()  |
|   |   | [`ft_memmove`]()  |

### Extension

| I | T |  Functions  |
|---|---|-------------|
| x | ? | [`ft_putchar_fd`](src/extension/io/ft_putchar_fd.c)  |
| x | ? | [`ft_putstr_fd`](src/extension/io/ft_putstr_fd.c)  |
| x | ? | [`ft_putendl_fd`](src/extension/io/ft_putendl_fd.c)  |
| x | ? | [`ft_putnbr_fd`](src/extension/io/ft_putnbr_fd.c)  |
|   |   | [`ft_substr`]()  |
|   |   | [`ft_strjoin`]()  |
|   |   | [`ft_strtrim`]()  |
|   |   | [`ft_split`]()  |
|   |   | [`ft_itoa`]()  |
|   |   | [`ft_strmapi`]()  |
|   |   | [`ft_striteri`]()  |

### Linked Lists

| I | T |  Functions  |
|---|---|-------------|
| x |   | [`ft_lstnew`](src/list/ft_lstnew.c)  |
|   |   | [`ft_lstadd_front`]()  |
|   |   | [`ft_lstsize`]()  |
|   |   | [`ft_lstlast`]()  |
|   |   | [`ft_lstadd_back`]()  |
|   |   | [`ft_lstdelone`]()  |
|   |   | [`ft_lstclear`]()  |
|   |   | [`ft_lstiter`]()  |
|   |   | [`ft_lstmap`]()  |


#### LICENSE

```
            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                    Version 2, December 2004

 Copyright (C) 2012 Romain Lespinasse <romain.lespinasse@gmail.com>

 Everyone is permitted to copy and distribute verbatim or modified
 copies of this license document, and changing it is allowed as long
 as the name is changed.

            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

  0. You just DO WHAT THE FUCK YOU WANT TO.
```
