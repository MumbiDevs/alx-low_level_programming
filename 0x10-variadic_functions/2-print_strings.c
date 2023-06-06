#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * @...: The variable number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list list;
    va_start(list, n);

    for (i = 0; i < n; i++)
    {
        if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
        }

        if (separator != NULL && i != n - 1)
        {
            printf("%s", separator);
        }
    }

    va_end(list);

    printf("\n");
}
