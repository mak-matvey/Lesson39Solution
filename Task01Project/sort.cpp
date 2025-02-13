#include "sort.h"
#include "util.h"

void bubble_sort(int* array, int size)
{
	int count = 0;
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
			count++;
		}
		if (flag)
		{
			break;
		}
	}

	cout << "Count: " << count << endl;
}