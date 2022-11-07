#include <iostream>

using namespace std;

bool isNumeric(string str) {
    if (str[0] == '-') str.erase(0, 1);
    for (int i = 0; i < str.length(); i++) {
        if(str[i] < '0' || str[i] > '9') {
            return false;
        }
    }
    return true;
}

int getNum() {
    string input;
    cout << "Sayi girin:";
    cin >> input;
    if (isNumeric(input)) {
        return stoi(input);
    }
    else {
        cout << "HATA: Sayisal bir deger girmelisiniz!" << endl;
        return getNum();
    }
}

int fib(int num) {
    if (num == 0) {
        return (0);
    }
    else if (num == 1 || num == 2) {
        return (1);
    }
    else {
        return (fib(num - 1) + fib(num - 2));
    }
}

int recursive() {
    string input;
    cin >> input;
    if (input != "CIK") {
        cout << input << endl;
        return recursive();
    }
    else {
        return (-1);
    }
}

void recursive_div(int div_num) {
    int num = getNum();
    if ((num % 11) == 0) {
        cout << "OK" << endl;
    }
    else {
        recursive_div(div_num);
    }
}

int main() {
    /*
     * Verilen bir sayı için Fibonacci sayılarını bulan recursive bir fonksiyon yazın. Girilen sayı kullanıcı
     * tarafından belirlenecek ve ardından Fibonacci işlevine iletilecektir.
     */
    int u_num = getNum();
    cout << u_num << " fibonacci: " << fib(u_num) << endl;

    /*
     * Kullanıcıdan bir string istemeye devam eden ve kullanıcı CIK girene kadar her diziyi yazdıran
     * recursive bir fonksiyon yazınız, ardından program sona erecek ve fonksiyon -1 değerini döndürecektir.
     */
    recursive();

    /*
     * Kullanıcı 11'e bölünebilen bir sayı girene kadar kullanıcıdan bir sayı istemeye devam eden
     * recursive bir fonksiyon yazınız. 11'e bölünebilen bir sayı girdiğinde fonksiyon OK yazdırması gerekiyor.
     */
    recursive_div(11);
    return 0;
}