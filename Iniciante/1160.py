# -*- coding: utf-8 -*-
import math
t = int(input())

for i in range (0, t):
    pop = input().split()
    PA = float(pop[0])
    PB = float(pop[1])
    G1 = float(pop[2])
    G2 = float(pop[3])
    tempo = 0

    while PA <= PB:
        PA = math.floor(PA + PA*(G1/100))
        PB = math.floor(PB + PB*(G2/100))
        tempo += 1

        if tempo > 100:
            break

    if tempo <= 100:
        print(tempo, "anos.")

    else:
        print("Mais de 1 seculo.")
