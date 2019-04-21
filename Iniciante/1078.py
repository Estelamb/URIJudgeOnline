# -*- coding: utf-8 -*-

n = int(input())

if 2 < n and n < 1000:
    for i in range(1, 11):
        tabuada = i * n
        print("{} x {} = {}".format(i, n, tabuada))
