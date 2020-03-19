# -*- coding: utf-8 -*-
a = [[0 for i in range(12)]for j in range(12)]
l = int(input())
ope = input()

for i in range(12):
    for j in range(12):
        a[i][j] = float(input())

soma = 0
for i in range(12):
    for j in range(12):
        if i == l:
            soma += a[i][j]


if ope == 'S':
    print("%.1f"%soma)

elif ope == 'M':
    media = soma/12
    print("%.1f"%media)
