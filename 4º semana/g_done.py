frase = input()
palavra = input()

qtd = 0

for i in range(len(frase)- len(palavra)+1):
    ver = 0
    for j in range(len(palavra)):
        if(palavra[j] == frase[j+i]):
            ver = 1
            break
    if ver == 0:
        qtd += 1

print(qtd)