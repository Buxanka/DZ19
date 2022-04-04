#include <iostream>
using namespace std;

int funcNOD(int num1, int num2) {
    while (num1 > 0 && num2 > 0) {
        if (num1 > num2)
            num1 %= num2;
        else
            num2 %= num1;
    }
    return num1 + num2;
}

int main(void) {
setlocale(LC_ALL, "Russian");

	cout << "Наибольший общий делитель 184 и 276 = " << funcNOD(184, 276) << endl;
    cout << "Наибольший общий делитель 34 и 12 = " << funcNOD(34, 12) << endl;
    cout << "Наибольший общий делитель 615 и 1476 = " << funcNOD(615, 1476) << endl;



	return 0;
}