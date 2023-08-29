metrosQuad = float(input('digite o tamanho da área a ser pintada (metros quadrados): '))
litrosTinta = metrosQuad / 3
qtdLatas = (litrosTinta / 18)
if litrosTinta % qtdLatas != 0:
    qtdLatas = int(qtdLatas) + 1
else:
    int(qtdLatas)
valor = qtdLatas * 80
print(f'Litros usados: {litrosTinta:.2f}L \nQuantidade de latas de tinta a serem compradas: {qtdLatas}\n\
valor total: {valor:.2f} Reais')