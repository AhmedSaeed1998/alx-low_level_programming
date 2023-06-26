#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * return: nothing
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*find string length woithout null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*swipe the string by looping to half of the string*/
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i]; /*- 1 increases teh arrays starts from 0*/
		s[l - 1 - i] = temp;
	}
}
