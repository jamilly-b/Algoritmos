#o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).
mb = float(input('insira o tamanho do arquivo (mb): '))
mbps = float(input('insira a velocidade da internet (Mbps): '))
segundos = (mb / ( mbps / 8))
minutos = segundos / 60

print(f'Tempo de Download: {minutos:.2f} minutos.')