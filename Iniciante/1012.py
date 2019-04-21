valores = input().split(" ")
A = float(valores[0])
B = float(valores[1])
C = float(valores[2])

area_triangulo = (A * C)/2
area_circulo = 3.14159 * (pow(C, 2))
area_trapezio = (C * (A + B))/2
area_quadrado = pow(B, 2)
area_retangulo = A * B

print("TRIANGULO: {0:.3f}".format(area_triangulo))
print("CIRCULO: {0:.3f}".format(area_circulo))
print("TRAPEZIO: {0:.3f}".format(area_trapezio))
print("QUADRADO: {0:.3f}".format(area_quadrado))
print("RETANGULO: {0:.3f}".format(area_retangulo))
