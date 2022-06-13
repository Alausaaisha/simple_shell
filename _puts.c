#include "main.h"

/*_puts - prints a string
 * @str: string to be printed
 */

void _puts(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		_putschar(str[i]);
		i++;
	}
}
