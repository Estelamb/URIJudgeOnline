# -*- coding: utf-8 -*-
par = [0 for i in range(5)]
impar = [0 for i in range(5)]
contimpar = 0
contpar = 0

for i in range(15):
    n = int(input())

    if n % 2 == 0:
        par[contpar] = n
        contpar += 1

        if contpar == 5:
            for j in range(5):
                print("par[{}] = {}".format(j, par[j]))
                contpar = 0


    else:
        impar[contimpar] = n
        contimpar += 1

        if contimpar == 5:
            for j in range(5):
                print("impar[{}] = {}".format(j, impar[j]))
                contimpar = 0

    if i == 14:
        for j in range(contimpar):
            print("impar[{}] = {}".format(j, impar[j]))
        for j in range(contpar):
            print("par[{}] = {}".format(j, par[j]))
