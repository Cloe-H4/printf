#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _writeit(char c);
int check_display(char c, va_list de_list);

/*switch functions*/
int print_num(int n);
int print_char(char c);
int print_str(char *s);
int print_etc(char etc);

#endif
