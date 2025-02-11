#include "sort.h"

void bubble_sort(int* array, int size)
{
	for (int c = 0; c < size - 1; c++)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				int t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;
			}
		}
	}
}