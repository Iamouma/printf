0x11. C - printf project

The printf function is a very important and versatile function in the C programming language and being about to create your custom version of it will go a long way to enhance your understanding of the language.The first secret to being able to complete this project successfully is to first get a solid understanding of the printf function itself, how it works and all the different ways in which it can be used.


1. Overview of printf.
The printf function in C is used for formatted output. It’s part of the Standard Input/Output Library (stdio.h) and is responsible for printing data to the standard output (typically the console) in a specified format. It’s an essential tool for displaying information to users and debugging programs.

The Format String:
At the core of printf is the format string. This string contains both text and format specifiers, which are placeholders for the values you want to print. Format specifiers start with a ‘%’ character, followed by a character that indicates the type of data to be printed (e.g., %d for integers, %s for strings).

Here’s a simple example:

int age = 30;
printf("I am %d years old.", age);
In this example, "I am %d years old." is the format string, and %d is the format specifier. The %d specifier tells printf to expect an integer value, which is provided as age.


2. Handling Variable Numbers of Arguments:
One of the unique features of printf is its ability to accept a variable number of arguments. This is accomplished using variadic functions in C. The printf function, like many other standard C library functions, is declared with the stdarg.h header to enable this functionality.

Here’s a simplified explanation of how it works:

printf first encounters the format string and parses it to identify format specifiers (e.g., %d, %s).

For each format specifier, printf expects an argument of the corresponding type. For %d, it expects an int, for %s, it expects a char*, and so on.

The number of format specifiers determines the number of arguments printf needs to process.

You pass these arguments to printf after the format string.

For example:

int age = 30;
char name[] = "John";
printf("Name: %s, Age: %d", name, age);
In this example, printf processes two format specifiers (%s and %d) and requires two corresponding arguments (name and age).

Variadic Functions:
To handle this variable number of arguments, printf uses the stdarg.h library, which provides macros like va_list, va_start, and va_arg. These macros allow printf to access its arguments sequentially, even though it doesn’t know the number or types of arguments at compile-time.


3. Understanding Format Specifiers:
Format specifiers in printf are placeholders that tell the function how to format and print data. They start with a ‘%’ character and are followed by a character that specifies the data type to be printed.

Here are some common format specifiers:

%d: Format as a signed decimal integer.
%u: Format as an unsigned decimal integer.
%f: Format as a floating-point number.
%s: Format as a null-terminated string.
%c: Format as a character.
%x: Format as a hexadecimal number, lowercase.
%X: Format as a hexadecimal number, uppercase.
Matching Format Specifiers with Arguments:
When printf processes the format string, it looks for ‘%’ characters and interprets the characters that follow to identify the expected data type of the argument. For example, when it encounters %d, it knows that an int argument is expected.

Here’s an example:

int num = 42;
printf("The answer is %d", num);
In this case, printf encounters %d and expects an int argument, which it gets from the num variable.

Handling Flags, Field Width, Precision, and Length Modifiers:
printf format specifiers can also include optional modifiers. These modifiers control the output format further. Some common modifiers include:

Flags: Control the alignment and representation of the output (e.g., %-10d for left-justified integer).
Field Width: Specify the minimum width of the output field (e.g., %5d for a minimum width of 5 characters).
Precision: Control the number of decimal places for floating-point numbers (e.g., %.2f for two decimal places).
Length Modifiers: Specify the size of the argument (e.g., %ld for a long integer).
Understanding how printf handles these modifiers is essential for building a custom version.


4. Role of Type Conversion:
Once printf identifies the expected data type from the format specifier, it performs type conversion on the argument to match that data type. This ensures that the data is appropriately formatted for printing. For example, if %d is encountered, printf expects an int, and if the argument is a double, it will be converted to an int.

Formatting Data for Output:
The way data is printed depends on the format specifier. For instance:

%d formats an integer as a signed decimal.
%f formats a floating-point number as a decimal.
%s prints a null-terminated string.
%c prints a single character.
Each format specifier has its own rules for formatting and printing data, including how many characters to print, whether to add leading zeros, and how to handle precision for floating-point numbers.

For example:

double pi = 3.14159265;
printf("Value of pi: %.2f", pi);
In this case, %.2f specifies that the pi variable should be formatted as a floating-point number with two decimal places.
5. ## Contributing

We welcome contributions from the community. To get started, follow these steps:

1. **Fork the Repository:** Click the "Fork" button at the top of this repository to create your copy.

2. **Clone Your Fork:** In your local development environment, clone your fork using the following command:

3. **Create a Branch:** Create a new branch for your work:

4. **Make Changes:** Make your desired changes and improvements in your local branch.

5. **Test Your Changes:** Before submitting a pull request, make sure to test your changes and ensure they work as expected.

6. **Commit Your Changes:** Commit your changes and provide a clear and descriptive commit message.


### Toggle navigation
Curriculum
SE Foundations
Average: 141.92%
### 0x11. C - printf
C
Group project
 Weight: 5
 Project to be done in teams of 2 people (your team: Elizabeth nafula, Ouma Ouma)
 Project over - took place from Oct 13, 2023 6:00 AM to Oct 18, 2023 6:00 AM
 An auto review will be launched at the deadline
### In a nutshell…
Contribution: 100.0%
Auto QA review: 99.0/103 mandatory & 202.0/1136 optional
Altogether:  113.21%
Mandatory: 96.12%
Optional: 17.78%
Contribution: 100.0%
Calculation:  100.0% * (96.12% + (96.12% * 17.78%) )  == 113.21%
### Concepts
For this project, we expect you to look at these concepts:

Printf function brief - What to know to create your own Printf function
All about Team Projects + Pairings + FAQ (A must read)
Group Projects
Flowcharts
Pair Programming - How To
Technical Writing
Background Context
Write your own printf function.



^ In this picture, Kris, and Jul

### Resources
Read or watch:

Secrets of printf
Group Projects concept page (Don’t forget to read this)
Flowcharts concept page
man or help:

printf (3)
### Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called main.h
Don’t forget to push your header file
All your header files should be include guarded
Note that we will not provide the _putchar function for this project
GitHub
There should be one project repository per group. The other members do not fork the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%

### More Info
Authorized functions and macros
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
Compilation
Your code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
Our main files will include your main header file (main.h): #include main.h
You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:
alex@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$
We strongly encourage you to work all together on a set of tests
If the task does not specify what to do with an edge case, do the same as printf
### Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
### Tasks
### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
mandatory
Score: 94.87% (Checks completed: 94.87%)
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Repo:

GitHub repository: printf
    
### 1. Education is when you read the fine print. Experience is what you get if you don't
mandatory
Score: 100.0% (Checks completed: 100.0%)
Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Repo:

GitHub repository: printf
   
### 2. With a face like mine, I do better in print
#advanced
Score: 62.96% (Checks completed: 62.96%)
Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary
alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%b\n", 98);
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
1100010
alex@ubuntu:~/c/printf$
Repo:

GitHub repository: printf
    
### 3. What one has not experienced, one will never understand in print
#advanced
Score: 1.28% (Checks completed: 1.28%)
Handle the following conversion specifiers:

u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Repo:

GitHub repository: printf
    
### 4. Nothing in fine print is ever good news
#advanced
Score: 100.0% (Checks completed: 100.0%)
Use a local buffer of 1024 chars in order to call write as little as possible.

Repo:

GitHub repository: printf
   
### 5. My weakness is wearing too much leopard print
#advanced
Score: 50.59% (Checks completed: 50.59%)
Handle the following custom conversion specifier:

S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%S\n", "Best\nSchool");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
Best\x0ASchool
alex@ubuntu:~/c/printf$
Repo:

GitHub repository: printf
    
### 6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
#advanced
Score: 15.29% (Checks completed: 15.29%)
Handle the following conversion specifier: p.

You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
Repo:

GitHub repository: printf
    
### 7. The big print gives and the small print takes away
#advanced
Score: 0.0% (Checks completed: 0.0%)
Handle the following flag characters for non-custom conversion specifiers:

+
space
#
Repo:

GitHub repository: printf
    
### 8. Sarcasm is lost in print
#advanced
Score: 1.35% (Checks completed: 1.35%)
Handle the following length modifiers for non-custom conversion specifiers:

l
h
Conversion specifiers to handle: d, i, u, o, x, X

Repo:

GitHub repository: printf
    
### 9. Print some money and give it to us for the rain forests
#advanced
Score: 1.19% (Checks completed: 1.19%)
Handle the field width for non-custom conversion specifiers.

Repo:

GitHub repository: printf
    
### 10. The negative is the equivalent of the composer's score, and the print the performance
#advanced
Score: 1.19% (Checks completed: 1.19%)
Handle the precision for non-custom conversion specifiers.

Repo:

GitHub repository: printf
    
### 11. It's depressing when you're still around and your albums are out of print
#advanced
Score: 1.18% (Checks completed: 1.18%)
Handle the 0 flag character for non-custom conversion specifiers.

Repo:

GitHub repository: printf
    
### 12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
#advanced
Score: 1.18% (Checks completed: 1.18%)
Handle the - flag character for non-custom conversion specifiers.

Repo:

GitHub repository: printf
    
### 13. Print is the sharpest and the strongest weapon of our party
#advanced
Score: 1.32% (Checks completed: 1.32%)
Handle the following custom conversion specifier:

r : prints the reversed string
Repo:

GitHub repository: printf
    
### 14. The flood of print has turned reading into a process of gulping rather than savoring
#advanced
Score: 1.32% (Checks completed: 1.32%)
Handle the following custom conversion specifier:

R: prints the rot13'ed string
Repo:

GitHub repository: printf
    
### 15. *
#advanced
Score: 7.06% (Checks completed: 7.06%)
All the above options work well together.

Well done on completing this project! Let the world hear about this milestone achieved.

Click here to tweet!

Repo:

GitHub repository: printf
    
Copyright © 2024 ALX, All rights reserved.


