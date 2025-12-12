*This project has been created as part of the 42 curriculum by ael-bakk*

## 📋 Description

**ft_printf** is a project that challenges you to recreate the famous `printf` function from the C standard library.

The goal is to create a function that behaves exactly like the original `printf`, supporting multiple conversion specifiers and returning the number of characters printed.

The function handles the following conversion specifiers:

| Specifier | Description | Example |
|-----------|-------------|---------|
| `%c` | Single character | `ft_printf("%c", 'A')` → `A` |
| `%s` | String | `ft_printf("%s", "Hello")` → `Hello` |
| `%p` | Pointer address in hexadecimal | `ft_printf("%p", ptr)` → `0x7fff5fbff7a0` |
| `%d` | Signed decimal integer | `ft_printf("%d", -42)` → `-42` |
| `%i` | Signed decimal integer | `ft_printf("%i", 42)` → `42` |
| `%u` | Unsigned decimal integer | `ft_printf("%u", 42)` → `42` |
| `%x` | Hexadecimal (lowercase) | `ft_printf("%x", 255)` → `ff` |
| `%X` | Hexadecimal (uppercase) | `ft_printf("%X", 255)` → `FF` |
| `%%` | Percent sign | `ft_printf("%%")` → `%` |

This project follows the **42 Norm**.

**Mbakk007**
- GitHub: [@Mbakk007](https://github.com/Mbakk007)
- 42 Intra: ael-bakk
