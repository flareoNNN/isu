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

int getAbsolute(int num) {
    if (num < 0) {
        return (num * (-1));
    }
    return num;
}

void printName() {
    string ad, soyad;
    cout << "Adiniz:";
    cin >> ad;
    cout << "Soyadiniz:";
    cin >> soyad;
    cout << ad << " " << soyad << endl;
}

void printTimes(string str, int times) {
    for (int i = 0; i < times; i++) {
        cout << str << endl;
    }
}

void canDivide(int div_num) {
    int num = getNum();
    if ((num % div_num) == 0) {
        cout << num << " sayisi " << div_num << " sayisina tam bolunur." << endl;
    }
    else {
        cout << num << " sayisi " << div_num << " sayisina tam bolunmez!" << endl;
    }
}

int main() {
    /*
     * Kullanıcıdan bir sayı alan ve mutlak değerini bulan bir fonksiyon yazınız.
     */
    int u_num = getNum();
    cout << u_num << " sayisinin mutlak degeri: " << getAbsolute(u_num) << endl;

    /*
     * Kullanıcı adı ve soyadını ayrı ayrı alan ve tam adını yazdıran bir fonksiyon yazınız.
     */
    printName();

    /*
     * Girdi olarak bir string alan ve onu on defa yazdıran bir fonksiyon yazınız.
     */
    printTimes("Huseyin Sirac YAKUT", 10);

    /*
     * Kullanıcıdan sadece bir sayı alan ve değerini döndüren bir fonksiyon yazınız.
     * Bu fonksiyonu başka bir fonksiyonun içinde çağırın ve 3'e bölünüp bölünemeyeceğini yazdırsın.
     */
    canDivide(3);
    return 0;
}