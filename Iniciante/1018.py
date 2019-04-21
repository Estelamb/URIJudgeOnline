# -*- coding: utf-8 -*-
n = int (input ())
print ("{}". format(n))

if 0 < n < 1000000:
    total = n // 100
    print ("{} nota(s) de R$ 100,00".format(total))
    n = n % 100

    total1 = n // 50
    print ("{} nota(s) de R$ 50,00".format(total1))
    n = n % 50

    total2 = n // 20
    print ("{} nota(s) de R$ 20,00".format(total2))
    n = n % 20

    total3 = n // 10
    print ("{} nota(s) de R$ 10,00".format(total3))
    n = n % 10

    total4 = n // 5
    print ("{} nota(s) de R$ 5,00".format(total4))
    n = n % 5

    total5 = n // 2
    print("{} nota(s) de R$ 2,00".format(total5))
    n = n % 2

    total6 = n // 1
    print("{} nota(s) de R$ 1,00".format(total6))
