popA = 8000
popB = 200000
i = 0
while popA <= popB:
    popA = popA + (0.03 * popA)
    popB = popB + (0.015 * popB)
    i += 1
print('é necessário %d anos para a população A superar a população B\n\
população A: %d\npopulação B: %d' % (i, popA, popB))