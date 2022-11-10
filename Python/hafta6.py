#
# Kullanıcı "toplam" yazana kadar kullanıcıdan float değer almaya devam eden bir fonksiyon yazın.
# "toplam" yazıldığında tüm yazılan sayıların toplamını yazdıracak.
#


def getSum():
    toplam = 0
    num = input("Sayi girin: ")
    while num != "toplam":
        try:
            toplam += float(num)
        except ValueError:
            print("Hatali giris yaptiniz, tekrar deneyin!")
        num = input("Sayi girin: ")
    print("Sayilarin toplami: {}".format(toplam))


getSum()


#
# Bir sistem için kullanıcıdan kullanıcı adını ve parolanı girmesini
# isteyen bir fonksiyon yazın. Fonksiyon, kullanıcı adı ve parolanın
# aşağıdakiyle eşleşip eşleşmediğini kontrol edecektir. Kullanıcının
# girdiği kullanıcı adı ve parolanın her ikisi veya herhangi biri
# yanlışsa, fonksiyon kullanıcıdan bunları tekrar girmesini isteyecek.
# a. Kullanici adi: Temel Programalma 1
# b. Parola: Uygulama Dersi
# - Kullanıcı kullanıcı adını veya şifreyi yanlış girerse, fonksiyon bu hata mesajını göstermelidir:
# "Kullanici adi veya sifre yanlis, lutfen tekrar giriniz :(".
# - Kullanıcı, kullanıcı adını ve parolayı doğru girerse, fonksiyon:
# "Uygulama dersimizin giris sistemine basariyla girdiniz :)"
# doğrulama mesajını göstermelidir.
#


def login():
    user = input("Kullanici adi: ")
    password = input("Sifre: ")

    while user != "Temel Programalma 1" or password != "Uygulama Dersi":
        print("Kullanici adi veya sifre yanlis, lutfen tekrar giriniz :(")
        user = input("Kullanici adi: ")
        password = input("Sifre: ")

    print("Uygulama dersimizin giris sistemine basariyla girdiniz :)")


login()