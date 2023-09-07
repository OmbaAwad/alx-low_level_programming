#include "main.h"
#include <stdlib.h>
/**
 * mul_array - multiply two arrays.
 * @a1: first array.
 * @len1: length of array a1.
 * @a2:  char.
 * @a3: array for result.
 * @lena: length of array a3.
 * Return: pointer to array.
 **/

void *mul_array(char *a1, int len1, char a2, char *a3, int lena)
{
	int mul = 0, i, k;

	k = lena;
	for (i = len1 - 1; i >= 0 ; i--)
	{
		mul += (a1[i] - '0') * (a2 - '0') + (a3[k] - '0');
		a3[k] = (mul % 10) + '0';
		mul /= 10;
		k--;
	}

		while (mul != 0)
		{
			mul += a3[k] - '0';
			a3[k] = (mul % 10) + '0';
			mul /= 10;
			k--;
		}

	return (a3);
}
