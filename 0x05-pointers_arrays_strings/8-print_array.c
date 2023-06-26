#include <stdio.h>
#include "main.h"

/**
* print_array - Prints a specified n of elements from an int arr.
* FOLLOWED BYA NEW LINE
* @a: Prints array
* @n: Prints number
*/
void print_array(int *a, int n)
{

int z;


for (z = 0; z < n; z++)
{
if (z == 0)
{
printf("%d", a[z]);
}
else
{
printf(", %d", a[z]);
}
}
printf("\n");
}
