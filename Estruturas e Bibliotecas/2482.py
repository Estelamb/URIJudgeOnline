# N -> Número de Traduções
# M -> Número de Crianças que Receberam
# a carta do papai noel
# Dict -> Dicionário que irá armazenar
# o idioma e a tradução de Feliz Natal

n = int(input())
dict = {}

while n:
    n -= 1
    lingua = input()
    trad = input()
    dict[lingua] = trad

m = int(input())

while m:
    m -= 1
    pessoa = input()
    lingua = input()
    print(pessoa)
    print(dict[lingua])
    print()