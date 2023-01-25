.TH man 3 "24 January 2023" "1.0" "_printf man page"
.SH NAME
.br
.B _printf
- print data
.br
.SH SYNOPSIS
.br
int _printf(const char *format, ...);

#include "alx.h"
.PP
.B int _printf(const char *format, ...);
.PP
.B int printnumberoctal(unsigned int n);
.PP
.B int _puts(char *str);
.PP
.B int _putchar(char c);
.br
.PP
.B #include
.PP
.B int printf_char(va_list args);
.PP
.B int printf_string(va_list args);
.PP
.B int printf_int(va_list args);
.PP
.B int printf_dec(va_list args);
.PP
.B int printnumber(int n);
.PP
.B int printf_percent(va_list args);
.pp
.B int printf_oct(va_list args);
.br
.SH DESCRIPTION
.br
_printf() produce output according to a format, write output to stdout.
.br

.SH OPTIONS
.br
.B Characters
.PP
_printf("Character with _print:[%c][%c][%c][%c]\n", 'A', 'L', 'X');
.PP
.I Output:
ALX
.PP
.B Strings
.PP.
_printf("String:[%s]\n", "WElcome, this is Alx,Holberton!");
.PP
.I Output:
Welcome, this is Alx,Holberton
.PP
.B Decimal and Integers
.PP
_printf("Actual: %i\n", INT_MIN);
_printf("Actual: %i\n", INT_MAX);
.I Output:
-2147483648
+2147483647
.br
.SH SEE ALSO
.br
.I printf(3), puts(3), putchar(3)
.br
.SH BUGS
.br
for now the function _printf don?t handle the flag characters, field width, precision, and length modifiers 
.br
.SH AUTHOR
.br
Wonderful A Adebayo(beardbreadman) , Sodiq oladipupo(sodman)
