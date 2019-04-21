n = 12
a = [[0 for i in range(n)]for j in range(n)]
o = input()

for i in range(n):
    for j in range(n):
        a[i][j] = float(input())

soma = 0
cont = 0
for i in range(n):
    for j in range(n):
        if j > i:
            soma += a[i][j]
            cont += 1

if o == 'S':
    print("%.1f" %soma)

elif o == 'M':
    media = soma/cont
    print("%.1f" %media)
