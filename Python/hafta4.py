#
#    Kullanıcıdan bir sayı alan ve mutlak değerini
#    bulan bir fonksiyon yazınız.
#

def mutlakDeger(sayi):
    if(sayi < 0):
        return (sayi * (-1))
    else:
        return sayi
    
def main():
    x = input()
    
    x = int(x)
    print(mutlakDeger(x))
        
main()

#
#    Kullanıcı adı ve soyadını ayrı ayrı alan ve tam adını 
#    yazdıran bir fonksiyon yazınız.
#

def getName():
    name = input("")
    surname = input("")
    print(name, surname)
    
getName()

#
#    Girdi olarak bir string alan ve onu on defa yazdıran 
#    bir fonksiyon yazınız.
#

def printStrings():
    string = input("")
    print(string * 10)
    
printStrings()

#
#    Kullanıcıdan sadece bir sayı alan ve değerini döndüren bir fonksiyon
#    yazınız. Bu fonksiyonu başka bir fonksiyonun içinde çağırın ve 3'e
#    bölünüp bölünemeyeceğini yazdırsın.
#

def getNumber():
    num = input("")
    return int(num)

def canDivide(div_num):
    n_num = getNumber()
    if((n_num % div_num) == 0):
        print("1")
    else:
        print("-1")

canDivide(3)