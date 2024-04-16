while True:
    try:
        M = int(input())
    except EOFError:
        break

    soma = 0
    totalCargaHoraria = 0

    for _ in range(M):
        notas, cargaHoraria = map(float, input().split()) 
        soma += notas * cargaHoraria
        totalCargaHoraria += cargaHoraria

    IRA = soma / (totalCargaHoraria * 100)
    print(f"{IRA:.4f}") 
