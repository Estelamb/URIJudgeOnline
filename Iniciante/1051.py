# -*- coding: utf-8 -*-
n = float(input())

if n >= 0.00 and n <= 2000.00:
    print("Isento")

elif n >= 2000.01 and n <= 3000.00:
    imposto = (n - 2000)*0.08
    print("R$ {0:.2f}".format(imposto))

elif n >= 3000.01 and n < 4500.00:
    imposto = (1000*0.08) + ((n - 3000)*0.18)
    print("R$ {0:.2f}".format(imposto))

elif n >= 4500.00:
    imposto = (1000*0.08) + (1500*0.18) + ((n - 4500)*0.28)
    print("R$ {0:.2f}".format(imposto))
