import math
def isPrimo(n):
    if(n < 5 or n % 2 == 0 or n % 3 == 0):
        return(n == 2 or n == 3)
    maximo = int(math.sqrt(n)) + 2

    for i in range(5,maximo+1, 6):
        if((n % i) == 0 or (n % (i+2)) == 0):
            return 0
    return 1

def isSuper(n):
    while(n != 0):
        num = int(n) % 10
        if(not( isPrimo(num))):
            return 0
        n = int(n / 10)
    return 1

while(True):
    try:
        n = int(input())
        if(not(isPrimo(n))):
            print("Nada")
        elif(isSuper(n)):
            print("Super")
        else:
            print("Primo")
    except EOFError:
        break