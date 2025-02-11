#include "util.h"
#include <ctime>
#define SIZE 10

int main()
{
	int array[SIZE];

	srand(time(0));
	random_init(array, SIZE, 0, 10);

	cout << "Array: " << convert(array, SIZE) << endl;

	return 0;
}