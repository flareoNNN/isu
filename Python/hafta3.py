def getNum():
    sayi = input("Bir sayi girin: ")
    if (sayi.lstrip('-').isdigit()):
        return int(sayi)
    else:
        return getNum()

#
# Aşağıdakileri yazdıran bir kod yazın:
# ******
# *****
# ****
# ***
# **
# *
#

def printStars(max):
    for i in range(max, 0, -1):
        print("*" * i)

printStars(6)

#
# Kullanıcıdan bir sayı alan ve sayının pozitif mi negatif olduğunu kontrol eden bir kod yazın.
#

def checkNum(num):
    if (num > 0):
        print("{} sayisi pozitif bir sayidir.".format(num))
    elif (num < 0):
        print("{} sayisi negatif bir sayidir.".format(num))
    else:
        print("{} sayisi notr bir sayidir.".format(num))

u_num = getNum()
checkNum(u_num)

#
# Kullanıcıdan sayı alan ve sayının 2'ye veya 3'e veya her ikisine de bölünüp bölünmediğini kontrol eden bir kod yazın.
#

def checkDivide(div_num):
    if ((div_num % 3) == 0 and (div_num % 2) == 0):
        print("{} sayisi 2 ve 3'e tam bolunur!".format(div_num))
    elif ((div_num % 2) == 0):
        print("{} sayisi 2'ye tam bolunur!".format(div_num))
    elif ((div_num % 3) == 0):
        print("{} sayisi 3'e tam bolunur!".format(div_num))
    else:
        print("{} sayisi 2 ve 3'e tam bolunemez.".format(div_num))

du_num = getNum()
checkDivide(du_num)

#
# Kullanıcıdan üç farklı sayı alan bir kod yazın, her sayı tek bir çubuğunuzunluğunu belirtir. Programınız,
# üç çubuğun bir üçgen oluşturupoluşturamayacağını kontrol edecektir. (Not: Bir üçgen oluşturmak için kural,
# üçgenin herhangi bir kenar uzunluğunun, herhangi iki kenar uzunluğununtoplamından daha büyük olmaması gerektiğini
# belirtir)
#

def checkTriangle(nums):
    if ((nums[0] <= (nums[1] + nums[2])) and (nums[1] <= (nums[0] + nums[2])) and (nums[2] <= (nums[0] + nums[1]))):
        print("{}, {} ve {} sayilariyla bir ucgen olusturulabilir.".format(nums[0], nums[1], nums[2]))
    else:
        print("{}, {} ve {} sayilariyla bir ucgen olusturulamaz!".format(nums[0], nums[1], nums[2]))

nums = []
for i in range(3):
    nums.append(getNum())

checkTriangle(nums)