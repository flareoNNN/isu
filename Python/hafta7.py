#
# for ifadesi kullanarak aşağıdakileri yazdırınız:
# *
# **
# ***
# ****
# *****
# ******
#

def printStars():
    for i in range(1, 7):
        print('*' * i)


printStars()


#
# for ifadesi kullanarak aşağıdakileri yazdırınız:
# ******
# *****
# ****
# ***
# **
# *
# ******
# *****
# ****
# ***
# **
# *
#

def printStars_2():
    for i in range(2):
        for j in range(6, 0, -1):
            print('*' * j)


printStars_2()


#
# Kullanıcıdan bir sayı alan ve for ifadesi kullanarak faktöriyelini hesaplayan bir fonksiyon yazınız.
#

def getNum():
    inp = input("Bir sayi girin: ")
    try:
        sayi = int(inp)
    except ValueError:
        print("Hatali giris yaptiniz, tekrar deneyin!")
        return getNum()
    return sayi


def getFactorial(number):
    fact = 1
    for i in range(2, (number + 1)):
        fact *= i
    return fact


def main():
    user_number = getNum()
    print("{} sayisinin faktoriyeli: {}".format(user_number, getFactorial(user_number)))


main()
