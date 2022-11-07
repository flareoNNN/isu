def getNum():
    sayi = input("Bir sayi girin: ")
    if (sayi.lstrip('-').isdigit()):
        return int(sayi)
    else:
        return getNum()

#
# Kullanıcıdan bir sayı alan ve mutlak değerini bulan bir fonksiyon yazınız.
#

def getAbsolute(num):
    if (num < 0):
        return (num * (-1))
    return num

u_num = getNum()
print("{} sayisinin mutlak degeri: {}".format(u_num, getAbsolute(u_num)))

#
# Kullanıcı adı ve soyadını ayrı ayrı alan ve tam adını yazdıran bir fonksiyon yazınız.
#

def getName():
    name = input("Adiniz: ")
    surname = input("Soyadiniz: ")
    print("{} {}".format(name, surname))

getName()

#
# Girdi olarak bir string alan ve onu on defa yazdıran bir fonksiyon yazınız.
#

def printTimes(str, times):
    for i in range(times):
        print("{}".format(str))

printTimes("Huseyin Sirac YAKUT", 10)

#
# Kullanıcıdan sadece bir sayı alan ve değerini döndüren bir fonksiyon yazınız.
# Bu fonksiyonu başka bir fonksiyonun içinde çağırın ve 3'e bölünüp bölünemeyeceğini yazdırsın.
#

def canDivide(div_num):
    num = getNum()
    if ((num % div_num) == 0):
        print("{} sayisi {} sayisina tam bolunur.".format(num, div_num))
    else:
        print("{} sayisi {} sayisina tam bolunmez!".format(num, div_num))

canDivide(3)