#include <stdio.h>

int sequentialSearch(int array[], int n, int SNo)
{
	int i;
	for (i = 0; i<=n-1; i++)
		if (array[i]==SNo)
			return 1;
	return 0;
}
