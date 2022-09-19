#include "main.h"

/**
 * swap_int - Swaps the value of two intagers.
 * @a: The first intager to be swaped.
 * @b: The second intager to be swaped.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
