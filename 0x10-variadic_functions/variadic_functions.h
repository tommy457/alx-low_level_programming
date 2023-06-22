#ifndef HEADER_H
#define HEADER_H

/**
 * struct print_type - type of printing depending on str
 * @str: character
 * @func: print type function
 */
typedef struct print_type
{
	char *str;
	void (*func)();
} print_type;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
