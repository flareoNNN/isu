#include <iostream>

using namespace std;

void printStars() {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < (i + 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void printStars_2() {
    for (int k = 0; k < 2; k++) {
        for (int i = 0; i < 6; i++) {
            for (int j = (6 - i); j != 0; j--) {
                cout << "*";
            }
            cout << endl;
        }
    }
}

int getNum() {
    char str[56], *ptr;
    int sayi;
    cout << "Bir sayi girin:";
    cin >> str;
    sayi = strtol(str, &ptr, 10);
    if (*ptr != '\0' || sayi < 0) {
        cout << "Hatali giris yaptiniz, tekrar deneyin!" << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        return getNum();
    }
    return sayi;
}

int getFactorial(int number) {
    int fact = 1;
    for (int i = 2; i <= number; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    /*
     * for ifadesi kullanarak aşağıdakileri yazdırınız:
     * *
     * **
     * ***
     * ****
     * *****
     * ******
     */
    printStars();

    /*
     * for ifadesi kullanarak aşağıdakileri yazdırınız:
     * ******
     * *****
     * ****
     * ***
     * **
     * *
     * ******
     * *****
     * ****
     * ***
     * **
     * *
     */
    printStars_2();

    /*
     * Kullanıcıdan bir sayı alan ve for ifadesi kullanarak faktöriyelini hesaplayan bir fonksiyon yazınız.
     */
    int user_number = getNum();
    cout << user_number << " sayisinin faktoriyeli: " << getFactorial(user_number) << endl;
    return 0;
}