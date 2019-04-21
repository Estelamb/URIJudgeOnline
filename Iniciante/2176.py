
s = input()
n = s
soma = 0

for i in range (0, 100):
    if int(n) > 0:
        resto = int(n) % 10
        n = int(n) // 10
        soma = soma + resto

    else:
        break

resto = soma % 2
if resto == 0:
    print("{}0".format(s))

else:
    print("{}1".format(s))
