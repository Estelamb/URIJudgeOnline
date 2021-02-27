# N -> Número de casos de teste, sendo que
# cada um tem duas linhas
# P1 e P2, variáveis auxiliares para cada
# caso teste

n = int(input())

for i in range(n):
    p1 = input()
    p2 = input()

    nome = ''

    for j in range(0, len(p1) - 1, 2):
        nome += p1[j:j+2] + p2[j:j+2]

    print(nome)
