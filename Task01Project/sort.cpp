#include "sort.h"
#include "util.h"

void bubble_sort(int* array, int size)
{
	bool flag = true;
	for (int j = 0; j < size - 1; j++)
	{
		for (int i = 0; i < size - 1 - j; i++)
		{
			if (array[i] > array[i + 1])
			{
				int t = array[i];
				array[i] = array[i + 1];
				array[i + 1] = t;
				flag = false;
			}
		}
		if (flag)
		{
			break;
		}
	}
}

void selected_sort(int* array, int size)
{
	for (int j = 0; j < size - 1; j++)
	{
		int index = j;
		for (int i = j + 1; i < size; i++)
		{
			index = array[i] > j ? i : j;
		}
		int t = array[j];
		array[j] = array[index];
		array[index] = t;
	}
}