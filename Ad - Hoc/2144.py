# -*- coding: utf-8 -*-
medias = 0

for i in range (1, 10000000000):
    lista = input().split(' ')
    w1 = float(lista[0])
    w2 = float(lista[1])
    r = float(lista[2])
    mr1 = w1 * (1 + (r / 30))
    mr2 = w2 * (1 + (r / 30))
    m = (mr1 + mr2) / 2

    if w1 == 0 and w2 == 0 and r == 0:
        break

    if 1 <= w1 and w1 <= 60:
        if 1 <= w2 and w1 <= 100:

            if  1 <= m and m < 13:
                print("Nao vai da nao")

            elif 13 <= m and m < 14:
                print("E 13")

            elif 14 <= m and m < 40:
                print("Bora, hora do show! BIIR!")

            elif 40 <= m and m <= 60:
                print("Ta saindo da jaula o monstro!")

            elif m > 60:
                print("AQUI E BODYBUILDER!!")

            medias = medias + m
if medias > 40:
    print("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!")
