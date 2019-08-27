while True:
    try:
        x = int(input())
        if((x>= 0 and x < 90) or (x == 360)):
            print('Bom Dia!!')
        elif(x>=90 and x < 180):
            print('Boa Tarde!!')
        elif(x>=180 and x < 270):
            print('Boa Noite!!')
        elif(x >= 270 and x < 360):
            print('De Madrugada!!')
    except EOFError:
        break