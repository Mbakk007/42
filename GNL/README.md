*This project has been created as part of the 42 curriculum by ael-bakk*

## 📋 Description

**get_next_line** is a 42 School project that challenges you to create a function that reads a line from a file descriptor, one line at a time. This project features static variables, file I/O operations, and efficient buffer management. 

The function can handle reading from files, standard input, or any valid file descriptor.

## ✨ Features

### Mandatory Part
- Read one line at a time from any file descriptor
- Returns the line with `\n` if present
- Works with any `BUFFER_SIZE` value (compile-time definition)
- Handles files, standard input, and other file descriptors
- Uses static variables to preserve buffer state between calls
- Proper memory management with no leaks

### Bonus Part
- Handle multiple file descriptors simultaneously
- Switch between different FDs without losing reading position
- Each FD maintains its own independent buffer state


**Mbakk007**
- GitHub: [@Mbakk007](https://github.com/Mbakk007)
- 42 Intra: ael-bakk

*Made with ☕ and countless test files at 42 School*
