#####################################
def dobra(l):
    for i in range(len(l)):
        l[i] = l[i] * 2
#####################################  
def soma(*param):
    soma = 0
    for i in param:
        soma = soma + i
        
    print(soma)
#####################################    
def subtracao(a, b):
    return a - b
#####################################
def elevado(base, exp = 2):
    return base ** exp
#####################################
def equacao2grau(a, b, c):
    delta = b * b - 4 * a * c
    if delta < 0:
        return 0, 0
    elif delta == 0:
        raiz = (-1 * b + ((delta)**(1/2))) / (2 * a)
        return raiz, 0
    else:
        raiz1 = (-1 * b + ((delta)**(1/2))) / (2 * a)
        raiz2 = (-1 * b - ((delta)**(1/2))) / (2 * a)   
        return raiz1, raiz2
    
##################################### Subtração       
resultado1 = subtracao(5, 3)
resultado2 = subtracao(5.8, 2)
print(resultado1)
print(resultado2)
##################################### Conteúdo dobrado da lista
lista = [2, 1, 4, 5]
dobra(lista)
print(lista)
##################################### Soma
quadrado = [item**2 for item in range(11)]
print(quadrado)
#######################################Itens da lista ao quadrado
pares = [item for item in range(21) if item % 2 == 0]
print(pares)
#######################################Itens da lista pares
similar = [x for x in quadrado if x in pares]
print(similar)
#######################################Similar

soma(1, 2, 3, 4, 5)
soma(-9, -3, 8)
soma(4)
##################################### Exponenciação
print(elevado(2, 3))
print(elevado(3))
##################################### Equação do segundo grau
a = 1
b = -3
c = -10
x, y = equacao2grau(a, b ,c)
print(f'As raizes são {x} e {y}')
#####################################

