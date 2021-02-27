# N -> Número de Casos
# X -> Cada caso
n = int(input())

while n > 0:
    n -= 1
    x = bin(int(input()))

    # Isso faz com o valor fique sem o '0b' do python
    # se tornando apenas um valor 'decimal'
    x = x[2:]

    # M armazena a maior sequencia de lampadas
    # nao queimadas, e aux vai somando até achar
    # uma lampada queimada
    m = 0
    aux = 0

    for i in x:
        if i == '1':
            aux += 1
        else:
            aux = 0
        if aux > m:
            m = aux
            
    print(m)