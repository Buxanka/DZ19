#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void funcArray(int array[], int length, int A, int B) {
	srand(time(NULL));
	for (int i = 0; i < length; i++) {
		array[i] = rand() % (B + 1 - A) + A;
		cout << array[i] << " ";
	}
}


int main(void) {
	setlocale(LC_ALL, "Russian");
	
	int mas[7];
	cout << "Массив с рандомными значениями от 4 до 9: ";
	funcArray(mas, 7, 4, 9);



	return 0;
}