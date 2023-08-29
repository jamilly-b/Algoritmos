import random
x = int(random.random()* 100)
y = int(random.random()* 100)
print('\nnumeros: %d e %d' % (x,y))
print('intervalo: ')
if x < y:
    intervalo = range(x+1,y)
    for i in intervalo:
        print(i, end= " ")
    print('\nsoma = %d\n' % sum(range(x,y)))
else:
    intervalo = range(y+1,x)
    for i in intervalo:
        print(i, end= " ")
    print('\nsoma = %d'% sum(range(y,x)))
print()
