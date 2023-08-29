h = float(input('Altura: '))
sexo = input('Sexo[M/F]: ')
if sexo == 'M':
    pesoIdeal = (72.7 * h) - 58
elif sexo == 'F': 
    pesoIdeal = (62.1 * h) - 44.7
print(f'Peso ideal: {pesoIdeal:.2f} Kg')