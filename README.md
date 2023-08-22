# **`printf`**

## Format Specifiers
We choose to add `%x`, `%X`, `%b`, `%o`, `%u`, `%r`, `%R`, and `%p` formatting. We relied on the library we have building at ALX as well as new concepts gathered during this project.

### Supported Format Types
| Type  | Output |
|:-----:|:------:|
| c | single chacter |
| s | string |
| r | string in reverse |
| R | string in rot13 |
| d | integer in decimal
| i | integer |
| % | percent sign |
| x | lowercase hex |
| X | uppercase hex |
| b | binary |
| o | octal |
| u | unsigned |
| p | pointer |
| F | expletive |

### Examples

Character: printf("%c", 'A'); Output:: A

String: printf("%s", 'This is a string.'); Output: This is a string.

Integer: printf("%i", 5); Output: 5

# Project Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Werror` `-Wextra` `and -pedantic`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `holberton.h`
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the `_putchar` function for this project

### Prototype
#include "main.h"
```bash
int _printf(const char *format, ...);
```
### Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```
### Return Value
* The number of characters printed.

## Authors
* **Fahad Hassan**
* **Paul Emmanuel**