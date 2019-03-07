#include <iostream>
#include <time.h>

int counter;
void PrintArray(int *array, int n) {
	for (int i = 0; i < n; ++i)
		std::cout << array[i] << " " << std::flush;
	std::cout << std::endl;
}

void BubbleSort(int *array, int n) {
	bool swapped = true;
	int j = 0;
	int temp;

	while (swapped) {
		swapped = false;
		j++;
		for (int i = 0; i < n - j; ++i) {
			if (array[i] > array[i + 1]) {
				counter++;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = true;
			}
		}
	}
}

int main() {
	double startTime = clock();
	int array[] = { 27, 32, 89, 74, 801, };
	int n = sizeof(array) / sizeof(array[0]);

	std::cout << "Before Bubble Sort: " << std::endl;
	PrintArray(array, n);

	BubbleSort(array, n);

	std::cout << "After Bubble Sort: " << std::endl;
	PrintArray(array, n);
	double endTime = clock();
	double deltaTime = endTime - startTime;
	std::cout << "Time Taken = " << deltaTime / CLOCKS_PER_SEC << " Seconds " << std::endl;
	std::cout << "Counter: " << counter << std::endl;
	return (0);
}