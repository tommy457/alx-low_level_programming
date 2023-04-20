#ifndef _HEADER_
#define _HEADER_
#define FORMAT(f) ("%"#f)
#include <stdarg.h>

/**
 * struct print_form - Define a struct to figure out how to print
 * @c: character
 * @f: pointer to function
 */
typedef struct print_form
{
	char *c;
	void (*f)();
} print_form_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
