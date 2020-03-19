# -*- coding: utf-8 -*-
while True:
  try:
    n = int(input())
    a = [[0 for i in range(n)]for j in range(n)]
    for i in range(n):
      for j in range(n):
        if i+j == n-1:
          a[i][j] = 2

        elif i == j:
          a[i][j] = 1

        else:
          a[i][j] = 3

    for i in range(n):
      for j in range(n):
        if j == n-1:
          print(a[i][j], end="")
          print("")
        else:
          print(a[i][j], end="")

  except :
    break
