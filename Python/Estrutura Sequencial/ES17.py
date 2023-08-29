tamanhoLata = 18
tamanhoGalao = 3.6
somaLitros = 0
area = float(input('\nDigite o tamanho da área a ser pintada (metros quadrados): '))
litrosTinta = area / 6
qtdLatas = (litrosTinta / tamanhoLata)

#primeiro caso
if litrosTinta % qtdLatas != 0:
    qtdLatas = int(qtdLatas) + 1
else:
    qtdLatas = int(qtdLatas)
valorLata = qtdLatas * 80
qtdGalao = (litrosTinta / tamanhoGalao)
sobra1 = (litrosTinta - (qtdLatas * tamanhoLata)) * -1

#segundo caso
if litrosTinta % qtdGalao != 0:
   qtdGalao = int(qtdGalao) + 1
else:
   qtdGalao = int(qtdGalao)
valorGalao = 25 * qtdGalao
sobra2 = (litrosTinta - (qtdGalao * tamanhoGalao)) * -1

#terceiro caso
qtdLatas2 = 0
qtdGalao2 = 0
while somaLitros + tamanhoGalao < litrosTinta:
    if litrosTinta - somaLitros >= tamanhoLata:
        somaLitros = somaLitros + tamanhoLata
        qtdLatas2 = qtdLatas2 + 1
    elif litrosTinta - somaLitros >= tamanhoGalao:
        somaLitros = somaLitros + tamanhoGalao
        qtdGalao2 = qtdGalao2 + 1
qtdGalao2 = qtdGalao2 + 1
sobra3 = (litrosTinta - ((qtdGalao2 * tamanhoGalao) + (qtdLatas2 * tamanhoLata))) * -1
valor2 = (qtdGalao2 * 25) + (qtdLatas2 * 80)

print(f'\nLitros de tinta necessários: {litrosTinta:.2f}L')
print(f'Quantidade de latas de tinta de 18L a serem compradas sozinhas: {qtdLatas}\n\
Valor: {valorLata:.2f}\nSobra: {sobra1:.2f}L')
print(f'Quantidade de galões de tinta de 3,6L a serem compradas sozinhas: {qtdGalao}\n\
Valor: {valorGalao:.2f}\nSobra: {sobra2:.2f}L')
print(f'Quantidade de latas de tinta de 18L a serem compradas: {qtdLatas2}\n\
Quantidade de galões de tinta de 3,6L a serem compradas: {qtdGalao2} \n\
Valor misturando os dois tipos: {valor2:.2f}\nSobra: {sobra3:.2f}L\n')