nome = input('nome de usuário: ')
senha = input('senha: ')

while nome in senha:
    print('O nome do usuário não pode estar na senha')
    senha = input('digite uma nova senha: ')