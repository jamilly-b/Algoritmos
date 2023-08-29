base = int(input('base: '))
expoente = int(input('expoente: '))
pot = 1
for x in range(expoente):
    pot = pot * base
print(pot)