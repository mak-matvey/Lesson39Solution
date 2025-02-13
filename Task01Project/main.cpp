#include "util.h"
#include "sort.h"
#include <ctime>
#define SIZE 10

// Это комментарий

int main()
{
	int array[SIZE];

	srand(time(0));
	random_init(array, SIZE, 0, 10);

	cout << "Array: " << convert(array, SIZE) << endl;
	bubble_sort(array, SIZE);
	cout << "Sorted array: " << convert(array, SIZE) << endl;

	return 0;
}