# Libft

Libft is a custom implementation of the C standard library functions. This project aims to recreate commonly used functions from the standard library, as well as some additional utility functions

## Usage

1. Clone the repository
```sh
git clone https://github.com/andrexandre/libft.git ; cd libft
```

2. Compile the library
```sh
make
```
> This will generate the `libft.a` static library file

3. Create a file `main.c`
```c
#include "libft.h"
#include <stdio.h>

int main() {
	char *string = "123";
	printf("number: %i\n", ft_atoi(string));	
}
```

4. Compile your program with the library
```sh
cc -o main main.c -L. -lft
```
> `-L` Adds `.` to the library search path, so the linker looks for libraries (e.g., `.a` or `.so` files) in the current folder\
> `-l` Links against a library called libft.a (the `lib` prefix and `.a` extension are implied)

5. And finally, run your program
```sh
./main
```

For the bonus functions, run
```sh
make bonus
```

## Functions

### Part 1 - Libc Functions

| Function | Description |
|----------|-------------|
| ft_atoi | Convert string to integer |
| ft_bzero | Zero a byte string |
| ft_calloc | Allocate and zero memory |
| ft_isalnum | Check if character is alphanumeric |
| ft_isalpha | Check if character is alphabetic |
| ft_isascii | Check if character is ASCII |
| ft_isdigit | Check if character is a digit |
| ft_isprint | Check if character is printable |
| ft_memchr | Locate byte in byte string |
| ft_memcmp | Compare byte string |
| ft_memcpy | Copy memory area |
| ft_memmove | Move memory area |
| ft_memset | Fill memory with a constant byte |
| ft_strchr | Locate character in string |
| ft_strdup | Duplicate a string |
| ft_strlcat | Size-bounded string concatenation |
| ft_strlcpy | Size-bounded string copying |
| ft_strlen | Calculate string length |
| ft_strncmp | Compare strings |
| ft_strnstr | Locate a substring in a string |
| ft_strrchr | Locate character in string from the end |
| ft_tolower | Convert uppercase to lowercase |
| ft_toupper | Convert lowercase to uppercase |

### Part 2 - Additional Functions

| Function | Description |
|----------|-------------|
| ft_itoa | Convert integer to string |
| ft_putchar_fd | Output character to given file |
| ft_putendl_fd | Output string with newline to given file |
| ft_putnbr_fd | Output integer to given file |
| ft_putstr_fd | Output string to given file |
| ft_split | Split string into an array of strings |
| ft_striteri | Apply function to each character of string with index |
| ft_strjoin | Concatenate two strings into a new string |
| ft_strmapi | Apply function to each character of string |
| ft_strtrim | Trim beginning and end of string with specified characters |
| ft_substr | Extract substring from string |

### Bonus Functions

| Function | Description |
|----------|-------------|
| ft_lstadd_back | Add new element at end of list |
| ft_lstadd_front | Add new element at beginning of list |
| ft_lstclear | Delete and free list |
| ft_lstdelone | Delete and free one element |
| ft_lstiter | Apply function to content of all list's elements |
| ft_lstlast | Find last element of list |
| ft_lstmap | Apply function to content of all list's elements into new list |
| ft_lstnew | Create new list element |
| ft_lstsize | Count elements in a list |

> [!NOTE]
> This project is part of the 42 School curriculum
