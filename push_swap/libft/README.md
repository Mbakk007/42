*This project has been created as part of the 42 curriculum by ael-bakk*

## 📋 Description

**Libft** is the first project at 42 School where you build your own C library from scratch. This project involves recreating essential functions from the C standard library.

**This library has been extended to include:**
- ✨ **ft_printf** - Custom implementation of printf with format specifiers
- ✨ **get_next_line** - Line reading function from file descriptors (with bonus for multiple FDs)

## 🛠️ Functions Implemented

### Libft Functions

#### Character Checks & Conversions
- `ft_isalpha` - Check if character is alphabetic
- `ft_isdigit` - Check if character is a digit
- `ft_isalnum` - Check if character is alphanumeric
- `ft_isascii` - Check if character is ASCII
- `ft_isprint` - Check if character is printable
- `ft_toupper` - Convert character to uppercase
- `ft_tolower` - Convert character to lowercase

#### String Functions
- `ft_strlen` - Calculate string length
- `ft_strlcpy` - Copy string with size limit
- `ft_strlcat` - Concatenate string with size limit
- `ft_strchr` - Locate character in string
- `ft_strrchr` - Locate character in string (from end)
- `ft_strncmp` - Compare strings up to n characters
- `ft_strnstr` - Locate substring in string
- `ft_strdup` - Duplicate string

#### Memory Functions
- `ft_memset` - Fill memory with constant byte
- `ft_bzero` - Zero out memory
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory area (handles overlap)
- `ft_memchr` - Scan memory for character
- `ft_memcmp` - Compare memory areas

#### Conversion & Allocation
- `ft_atoi` - Convert string to integer
- `ft_calloc` - Allocate and zero memory

Custom utility functions for enhanced string manipulation:

- `ft_substr` - Extract substring from string
- `ft_strjoin` - Concatenate two strings (with malloc)
- `ft_strtrim` - Trim characters from start and end
- `ft_split` - Split string by delimiter into array
- `ft_itoa` - Convert integer to string
- `ft_strmapi` - Apply function to each character (with index)
- `ft_striteri` - Iterate through string with function
- `ft_putchar_fd` - Output character to file descriptor
- `ft_putstr_fd` - Output string to file descriptor
- `ft_putendl_fd` - Output string with newline to fd
- `ft_putnbr_fd` - Output number to file descriptor

Functions for manipulating linked lists:

- `ft_lstnew` - Create new list element
- `ft_lstadd_front` - Add element at beginning
- `ft_lstsize` - Count list elements
- `ft_lstlast` - Get last element
- `ft_lstadd_back` - Add element at end
- `ft_lstdelone` - Delete one element
- `ft_lstclear` - Delete all elements
- `ft_lstiter` - Iterate through list
- `ft_lstmap` - Create new list with function applied

### 🎨 ft_printf Functions

Custom implementation of printf with variadic arguments:

- `ft_printf` - Main printf function with format string parsing
- Supported conversions:  `%c` `%s` `%p` `%d` `%i` `%u` `%x` `%X` `%%`
- `ft_hex_size` - Convert unsigned int to hexadecimal
- `ft_pointer_size` - Print pointer address in hex format
- `ft_putchar_size` - Print character and return size
- `ft_putnbr_size` - Print integer and return size
- `ft_putstr_size` - Print string and return size
- `ft_putunsigned_size` - Print unsigned integer and return size

### 📖 get_next_line Functions

Read lines from file descriptors one at a time:

- `get_next_line` - Read a line from a file descriptor
- `get_next_line_bonus` - Read from multiple FDs simultaneously

**Features:**
- Works with any `BUFFER_SIZE` (configurable at compile time)
- Returns line with `\n` if present
- Handles multiple file descriptors independently (bonus)
- Proper memory management with no leaks



This project strictly follows the **42 Norm**: 


**Mbakk007**
- GitHub: [@Mbakk007](https://github.com/Mbakk007)
- 42 Intra: ael-bakk
