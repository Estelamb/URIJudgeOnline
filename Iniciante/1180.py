# -*- coding: utf-8 -*-
n = int(input())
a = [0 for i in range(n)]
b = input().split()

for i in range(n):
    a[i] = int(b[i])

for i in range(n):
    if i == 0:
        menor = a[i]
        pos = i

    if a[i] <= menor:
        menor = a[i]
        pos = i

print("Menor valor: {}\nPosicao: {}".format(menor, pos))
