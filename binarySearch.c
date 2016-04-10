#include <stdio.h>

int binarySearch(int array[], int start,int end,int sNo)
{
        int mid = (start+end)/2;
        if (array[mid] == sNo)
                return 1;
        if (start + 1 == end)
                if (array[end] == sNo)
                        return 1;
                else
                        return 0;
        if (array[mid] < sNo)
                return binarySearch(array,mid,end,sNo);
        else
                return binarySearch(array,start,mid,sNo);

}


