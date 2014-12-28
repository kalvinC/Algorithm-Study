/**
define a function about genrial swap.
please pay attention to the reference, when coding a swap.
*/
template<class T>
void swap(T& val1,T& val2)
{
	T tmp = val1;
	val1 = val2;
	val2 = tmp;
}

/**
define a insert sort algorithm.
[10,9,8,7,6,5,4,3,2,1]
[[10],9,7,6,5,4,3,2,1]
    |-jump the first value 10, start 9, when 9 is smaller than 10
    |-inert 9 into [10].
after inserted.as follow:
[[10,9],8,7,6,5,4,3,2,1]
next, go before.
*/
template<class T>
void insert_sort(T * array, int array_size)
{
	if(array_size <= 1)
	{
		return;
	}

	int i = 1; 
	for(; i < array_size;i++)
	{
		for(int j = i;j > 0;j--)
		{
			if(array[j] < array[j-1])
			{
				swap(array[j-1],array[j]);
			}
		}
	}
}

