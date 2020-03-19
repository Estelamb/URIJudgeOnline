n = int(input())
tempo = input().split(" ")
a = int(tempo[0])
b = int(tempo[1])

soma = a + b

if soma > n:
    print("Deixa para amanha!")

else:
    print("Farei hoje!")
