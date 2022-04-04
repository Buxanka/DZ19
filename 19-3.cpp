#include <iostream>
#include <algorithm>
using namespace std;

int indexArray(int array[], int length, int N) {
	int key = 0;
	for (int i = 0; i < length; i++)
		if (array[i] == N) {
			key = i;
			break;
		}

	sort(array + key + 1, array + length);


	return key;
}

void showArray(int array[], int length) {
	for (int i = 0; i < length; i++) {
		cout << array[i] << " ";
	}
}


int main(void) {
	setlocale(LC_ALL, "Russian");

	int mas[5] = { 4, 2, 7, 3, 8 };

	cout << "Изначальный массив: ";
	showArray(mas, 5);
	cout << endl;
	cout << "Первая позиция числа 2 = " << indexArray(mas, 5, 2) << endl;
	cout << "Отсортированный массив: ";
	showArray(mas, 5);





	return 0;
}