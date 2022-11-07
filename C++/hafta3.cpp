#include <iostream>

using namespace std;

void printStars(int max) {
    for (int i = max; i != 0; i--) {
        for (int j = i; j != 0; j--) {
            cout << "*";
        }
        cout << endl;
    }
}

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

void checkNum(int num) {
    if (num < 0) {
        cout << num << " sayisi negatif bir sayi." << endl;
    }
    else if (num > 0) {
        cout << num << " sayisi pozitif bir sayi." << endl;
    }
    else {
        cout << num << " sayisi notr bir sayi." << endl;
    }
}

void checkDivide(int num) {
    if ((num % 2) == 0 && (num % 3) == 0) {
        cout << num << " sayisi 2 ve 3'e tam bolunur." << endl;
    }
    else if((num % 2) == 0) {
        cout << num << " sayisi 2'ye tam bolunur." << endl;
    }
    else if((num % 3) == 0) {
        cout << num << " sayisi 3'e tam bolunur." << endl;
    }
    else {
        cout << num << " sayisi 2 veya 3'e bolunemez!" << endl;
    }
}

void checkTriangle(int num[]) {
    if ((num[0] <= (num[1] + num[2])) && (num[1] <= (num[0] + num[2])) && (num[2] <= (num[0] + num[1]))) {
        cout << num[0] << ", " << num[1] << " ve " << num[2] << " sayilariyla bir ucgen olusturulabilir." << endl;
    }
    else {
        cout << num[0] << ", " << num[1] << " ve " << num[2] << " sayilariyla bir ucgen olusturulamaz!" << endl;
    }
}

int main() {
    /*
        Aşağıdakileri yazdıran bir kod yazın:
        ******
        *****
        ****
        ***
        **
        *
    */
    printStars(6);

    /*
     * Kullanıcıdan bir sayı alan ve sayının pozitif mi negatif olduğunu kontrol eden bir kod yazın.
     */
    int num_1 = getNum();
    checkNum(num_1);

    /*
     * Kullanıcıdan sayı alan ve sayının 2'ye veya 3'e veya her ikisine de bölünüp bölünmediğini kontrol eden bir kod yazın.
     */
    int num_2 = getNum();
    checkDivide(num_2);

    /*
     * Kullanıcıdan üç farklı sayı alan bir kod yazın, her sayı tek bir çubuğun uzunluğunu belirtir.
     * Programınız, üç çubuğun bir üçgen oluşturup oluşturamayacağını kontrol edecektir.
     * (Not: Bir üçgen oluşturmak için kural, üçgenin herhangi bir kenar uzunluğunun, herhangi iki kenar uzunluğunun toplamından daha büyük olmaması gerektiğini belirtir)
     */
    int nums[3];
    for (int i = 0; i < 3; i++) {
        start:
        nums[i] = getNum();
        if (nums[i] <= 0) goto start;
    }
    checkTriangle(nums);
    return 0;
}