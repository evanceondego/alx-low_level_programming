#include "main.h"

/**
 * _atoi - This function converts a string to an integer.
 * @s: Pointer to the string
 * Return: Converted integer value
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	/* Check for the sign*/
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	/* Convert string to integer*/
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			/*Break if non-digit character encountered*/
			break;
		}

		i++;
	}

	return (sign * result);
}
