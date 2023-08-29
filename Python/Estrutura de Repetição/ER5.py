popA = int(input('Tamanho da população A: '))
taxaA = float(input('Taxa de crescimento da população A (%): '))
popB = int(input('Tamanho da população B: '))
taxaB = float(input('Taxa de crescimento da população B (%): '))
i = 0
if popA < popB:
    while popA <= popB:
        popA = popA + (taxaA/100 * popA)
        popB = popB + (taxaB/100 * popB)
        i += 1
    print('é necessário %d anos para a população A superar a população B\n\
população A: %d\npopulação B: %d' % (i, popA, popB))
else:
    while popB <= popA:
        popA = popA + (taxaA/100 * popA)
        popB = popB + (taxaB/100 * popB)
        i += 1
    print('é necessário %d anos para a população B superar a população A\n\
população A: %d\npopulação B: %d' % (i, popA, popB))