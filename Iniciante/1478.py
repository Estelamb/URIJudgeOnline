# -*- coding: utf-8 -*-
n = 1
while n != 0:
    n = int(input())
    if n == 0:
        break

    a = [[0 for i in range(n)] for j in range(n)]
    for i in range(n):
        cont = 1
        for j in range(i, n):
            a[i][j] = cont
            a[j][i] = cont
            cont += 1


    for i in range(n):
        for j in range(n):
            if j == 0:
                print("%3d"%a[i][j],end="")

            else:
                print("%4d" % a[i][j], end="")
        print("")
    print("")
