def getNum():
    sayi = input("Bir sayi girin: ")
    if (sayi.lstrip('-').isdigit()):
        return int(sayi)
    else:
        return getNum()

#
# Verilen bir sayı için Fibonacci sayılarını bulan recursive bir fonksiyon yazın. Girilen sayı kullanıcı
# tarafından belirlenecek ve ardından Fibonacci işlevine iletilecektir.
#

def fibonacci(num):
    if (num == 0):
        return (0)
    elif (num == 1 or num == 2):
        return (1)
    else:
        return (fibonacci(num - 1) + fibonacci(num - 2))

fib_sayi = getNum()
print("{} fibonacci: {}".format(fib_sayi, fibonacci(fib_sayi)))

#
# Kullanıcıdan bir string istemeye devam eden ve kullanıcı CIK girene kadar her diziyi yazdıran
# recursive bir fonksiyon yazınız, ardından program sona erecek ve fonksiyon -1 değerini döndürecektir.
#

def recursive():
    str = input("")
    if (not str == "CIK"):
        print(str)
        return recursive()
    else:
        return (-1)

recursive()

#
# Kullanıcı 11'e bölünebilen bir sayı girene kadar kullanıcıdan bir sayı istemeye devam eden
# recursive bir fonksiyon yazınız. 11'e bölünebilen bir sayı girdiğinde fonksiyon OK yazdırması gerekiyor.
#

def recursive_div(div_num):
    num = getNum()
    if ((num % div_num) == 0):
        print("OK")
    else:
        recursive_div(div_num)

recursive_div(11)