# -*- coding: utf-8 -*-
t = int(input())
Fib = [0 for x in range(61)]
n = [0 for x in range(t)]
Fib[0] = 0
Fib[1] = 1

for i in range(2, 61):
    Fib[i] = Fib[i-2] + Fib[i-1]

for i in range(t):
    n[i] = int(input())

for i in range(t):
    print("Fib({}) = {}".format(n[i], Fib[n[i]]))
