#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

template<class T>
unsigned int binary_serach(T val, T * array, unsigned int begin, unsigned int end)
{
	if(!array)
		return -1;

	if(begin > end)
		return -1;

	unsigned int first = begin;
	unsigned int last = end;
	unsigned int mid = 0;

	while(first <= last)
	{
		mid = (first+last)/2;

		if(array[mid] == val)
		    return mid;
		else if(array[mid] > val)
			last = mid -1;
		else
		    first = mid + 1;
	}

	return -1;
}

#endif