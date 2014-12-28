#ifndef BUBBLESORT_H
#define BUBBLESORT_H

/**
define a function about genrial swap.
please pay attention to the reference, when coding a swap.
*/
template<class T>
void swap(T &val1, T &val2)
{
	T tmp = val1;
	val1 = val2;
	val2 = tmp;
}

/**
define a function for bubble sort.
fg: [10,9,8,7,6,5,4,3,2,1]
[10,9,8,7,6,5,4,3,2,1]
first:[9,8,7,6,5,4,3,2,1,[10]]
second:[8,7,6,5,4,3,2,1,[9,10]]
..............
final:[[1,2,3,4,5,6,7,8,9,10]]
*/
template<class T>
void bubble_sort(T * array, int array_size)
{
	if(array_size <= 1)
		return;

	for(int i = 0; i < array_size - 1; i++)
	{
		for(int j = 0; j < array_size - i - 1; j++)
		{
			if(array[j] > array[j+1])
				swap(array[j],array[j+1]);
		}
	}
}
#endif