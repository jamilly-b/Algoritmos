nome = input('nome: ')
while len(nome) <= 3:
    nome = input('nome com mais de 3 caracteres: ')
idade = int(input('idade: '))
while idade < 0 or idade > 150:
    idade = int(input('idade válida: '))
salario = float(input('salario: '))
while salario <= 0:
    salario = float(input('salario válido: '))
sexo = input('sexo[m/f]: ')
while sexo not in ['f', 'm']:
    sexo = input('sexo[m/f]: ')
estadoCivil = input('estado civil[s/c/v/d]: ')
while estadoCivil not in ['s', 'c', 'v', 'd']:
    estadoCivil = input('estado civil[s/c/v/d]: ')