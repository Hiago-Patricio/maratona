
x = int(input())
while(x != 0):
    pilha = []
    y = input().split()
    for i in y:
        pilha.append(int(i))

    maior = 0
    for i in pilha:
        if(i > maior):
            maior = i

    segundo_maior = 0
    posicao = 0
    pos = 0
    for i in pilha:
        pos += 1
        if(i > segundo_maior and i != maior):
            posicao = pos
            segundo_maior = i

    print(posicao)
    x = int(input())
