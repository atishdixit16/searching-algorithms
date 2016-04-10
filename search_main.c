#include <stdio.h>
#include "search_functions.h"

int main(int argc, char *argv[])
{
	int n,i,sNo;
	n=argc-1;
	int array[n-1];
	for (i = 0; i<=n-1; i++)
		array[i]=atoi(argv[i+1]);

	//sorting
	bubbleSort(array,n);
	
	//report the search
	while(1)
	{
		printf("\nEnter the number to search: ");
		scanf("%d",&sNo);
		if (binarySearch(array, 0, n,sNo)/*sequentialSearch(array,n,sNo)*/ == 1)
			printf("found!");
		else
			printf("not found!");
		printf("\n(press CTRL+C to exit)\n");
	}
	return 0;
}

