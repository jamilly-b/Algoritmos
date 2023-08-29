x, y = map(int, input('digite dois numeros inteiros: ').split())
z = float(input('digite um numero real: '))
calculo1 = (2 * x) * (y / 2)
calculo2 = (3 * x) + z
calculo3 = (z ** 3)

print(f'\no produto do dobro do primeiro com metade do segundo = {calculo1:.0f} \
      \nsoma do triplo do primeiro com o terceiro = {calculo2:.0f} \
      \no terceiro elevado ao cubo = {calculo3:.0f}')