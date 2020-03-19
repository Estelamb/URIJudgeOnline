# -*- coding: utf-8 -*-
c = int(input())
t = input()
matriz = [[0 for i in range(12)]for i in range(12)]
for i in range(12):
    for j in range(12):
        matriz[i][j] = float(input())

soma = 0
if t == 'S':
    for i in range(12):
        soma = soma + matriz[i][c]
    print("{0:.1f}".format(soma))

elif t == 'M':
    for i in range(12):
        soma = soma + matriz[i][c]
    print("{0:.1f}".format(soma/12))
