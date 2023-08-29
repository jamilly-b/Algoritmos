import random
x = int(random.random()* 100)
y = int(random.random()* 100)
print(x,y)
if x < y:
    intervalo = range(x+1,y)
    for i in intervalo:
        print(i, end= " ")
else:
    intervalo = range(y+1,x)
    for i in intervalo:
        print(i, end= " ")
print()