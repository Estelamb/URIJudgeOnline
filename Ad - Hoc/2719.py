# T -> Casos de Teste
# N -> numero de presentes a serem entregues
# M -> Peso máximo dos presentes
# P[N] -> Peso da cada presente

t = int(input())

for i in range(t):
    n, m = [int(i) for i in input().split()]
    p = [int(i) for i in input().split()]

    viagem = 1
    peso = p[0]

    for j in range(1,n):
        if(peso + p[j] > m):
            viagem += 1
            peso = p[j]
        else:
            peso += p[j]

    print(viagem)