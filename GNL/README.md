This project has been created as part of the 42 curriculum by <ael-bakk>

// Description

The "get_next_line" project aims to create a function that reads line by line from a file descriptor.
The bonus part adds support for reading from multiple file descriptors simultaneously.

// Instructions

To test the get_next_line project, user must provide a "test.txt" to read from, and also a "main.c" to run the function.

// Resources

Watched some videos explaining the project, Ai was used to help correct the NULL_CHECK errors and test the project.




The function reads the file descriptor in small chunks and keeps any leftover data in a static buffer so nothing is lost between calls. Reading continues only until a newline or EOF appears.
When a full line is available, it is extracted and returned, while the rest is saved for the next call.
I chose this approach because it is simple, efficient, and fits exactly what the project expects: one clean line per call without leaking memory or re-reading the same data.


