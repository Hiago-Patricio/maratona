a,b,c = input().split(' ')
a,b,c = int(a), int(b), int(c)

lista = []
lista.append(a)
lista.append(b)
lista.append(c)
lista.sort()
for i in lista:
    print(i)
print()
print(a)
print(b)
print(c)