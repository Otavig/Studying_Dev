# Ep 23

"""
    Variáveis são usadas para salvar algo na memória do computador.
    PEP8: Inicie variáveis com letra minúsculas, pode usar números e underline _.
    O sinal de = é o operador de atribuilção. Ele é usado para atribuir um valor a um nome (variábel).
    Uso: nome_variavel = expressão
"""

# Área do retângulo
base = float(input('Digite a base do triangulo: '))
altura = float(input('Digite a altura: '))
print(f'{base * altura} cm')


nome_completo = 'Luiz Otávio'
soma_dois_mais_dois=2+2
print(nome_completo, soma_dois_mais_dois)


idade = 30
maior_idade = idade >= 18

def validar():
    if maior_idade == True:
        return 'Verdade'
    else:
        return 'Mentira'

print(f'Nome: {nome_completo} e Idade: {idade}' + '\n' + f'É maior de idade ?: {validar()}')