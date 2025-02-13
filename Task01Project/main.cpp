#include "util.h"
#include "sort.h"
#include <ctime>
#define SIZE 10

int main()
{
	int array[SIZE];

	srand(time(0));
	random_init(array, SIZE, 0, 10);

	cout << "array: " << convert(array, SIZE) << endl;
	bubble_sort(array, SIZE);
	cout << "sorted array: " << convert(array, SIZE) << endl;

	return 0;
}