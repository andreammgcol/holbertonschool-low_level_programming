#ifndef VAR_FUNC
#define VAR_FUNC

typedef struct format
{
	char s;
	void (*f)(va_list);
} ft;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
