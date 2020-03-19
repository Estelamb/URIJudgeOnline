# -*- coding: utf-8 -*-
n_alunos = int(input())

while n_alunos!=0:
    resposta = [0 for x in range(n_alunos)]
    respostas = input().split()

    for i in range(n_alunos):
        resposta[i] = int(respostas[i])

    culpado = int(input())

    while resposta[culpado-1] != culpado:
        culpado = resposta[culpado-1]

    print(culpado)
    n_alunos = int(input())
