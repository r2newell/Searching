#include <stdio.h> 
#include <stdlib.h> 
#include "binarySearch.h"



int binarySearch(const int *seq, int key, int size)
{
	int start = 0; 
	int end = size; 
	int middle; 

	while(start < end)
	{
	
	    printf("\n%d\n", middle);
		middle = (start + end) / 2; 
		if(seq[middle] == key)
			   return middle; 
		else if(key < seq[middle])
			  end = middle; 
		else 
			   start = middle + 1; 

	}

	return 0; 

}

