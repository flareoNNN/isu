#include <iostream>

using namespace std;

void getSum() {
    string inp;
    float sayi;
    float toplam = 0;

    cout << "Sayi girin:";
    getline(cin, inp);

    while (inp != "toplam") {
        try {
            sayi = stof(inp);
            toplam += sayi;
        }
        catch (...) {
            cout << "Hatali giris yaptiniz, tekrar deneyin!" << endl;
        }
        cout << "Sayi girin:";
        getline(cin, inp);
    }

    cout << "Sayilarin toplami: " << toplam << endl;
}

void userLogin() {
    string user;
    string pass;
    cout << "Kullanici adi:";
    getline(cin, user);
    cout << "Sifre:";
    getline(cin, pass);

    while (user != "Temel Programalma 1" || pass != "Uygulama Dersi") {
        cout << "Kullanici adi veya sifre yanlis, lutfen tekrar giriniz :(" << endl;
        cout << "Kullanici adi:";
        getline(cin, user);
        cout << "Sifre:";
        getline(cin, pass);
    }

    cout << "Uygulama dersimizin giris sistemine basariyla girdiniz :)" << endl;
}

int main() {
    /*
     * Kullanıcı "toplam" yazana kadar kullanıcıdan float değer almaya devam eden bir fonksiyon yazın.
     * "toplam" yazıldığında tüm yazılan sayıların toplamını yazdıracak.
     */
    getSum();

    /*
     * Bir sistem için kullanıcıdan kullanıcı adını ve parolanı girmesini
     * isteyen bir fonksiyon yazın. Fonksiyon, kullanıcı adı ve parolanın
     * aşağıdakiyle eşleşip eşleşmediğini kontrol edecektir. Kullanıcının
     * girdiği kullanıcı adı ve parolanın her ikisi veya herhangi biri
     * yanlışsa, fonksiyon kullanıcıdan bunları tekrar girmesini isteyecek.
     * a. Kullanici adi: Temel Programalma 1
     * b. Parola: Uygulama Dersi
     * - Kullanıcı kullanıcı adını veya şifreyi yanlış girerse, fonksiyon bu hata mesajını göstermelidir:
     * "Kullanici adi veya sifre yanlis, lutfen tekrar giriniz :(".
     * - Kullanıcı, kullanıcı adını ve parolayı doğru girerse, fonksiyon:
     * "Uygulama dersimizin giris sistemine basariyla girdiniz :)"
     * doğrulama mesajını göstermelidir.
     */
    userLogin();
    return 0;
}