#include <iostream>
using namespace std;

void resurveNumber(int num) {
	int reverse = 0, rem;
	while (num > 0) {
		rem = num % 10;
		reverse = reverse * 10 + rem;
		num /= 10;
	}
	cout << reverse << endl;
}


int main(void) {
	setlocale(LC_ALL, "Russian");
	
	resurveNumber(1234);
	resurveNumber(140);
	resurveNumber(45670);
	resurveNumber(12);



	return 0;
}