peso = float(input('peso dos peixes: '))
if peso > 50:
    excesso = peso - 50
    multa = 4 * excesso
else:
    excesso = 0
print(f'João pescou {peso:.2f} Kg de peixe, \
sendo {excesso:.2f} Kg excedentes, \
e terá que pagar uma multa de {multa:.2f} Reais')