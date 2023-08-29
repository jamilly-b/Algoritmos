valorHora = float(input('\ndigite quanto você recebe por hora: '))
horasTrabalhadas = int(input('digite o numero de horas trabalhadas no mês: '))
salario = (valorHora * horasTrabalhadas)
IR = 0.11 * salario
INSS = 0.08 * salario
sindicato = 0.05 * salario
salarioTotal = salario - IR - INSS - sindicato

print(f'\nSalário Bruto: R$ {salario}\n\
IR (11%): R$ {IR}\n\
INSS (8%): R$ {INSS}\n\
Sindicato (5%): R$ = {sindicato}\n\
Salário Liquido : R$ {salarioTotal:.2f}\n\n\
Obs.: Salário Bruto - Descontos = Salário Líquido.\n')