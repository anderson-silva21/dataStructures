import numpy as np
####################################Vetor e não lista
vet = np.array([1, 2, 3, 4, 5])
print(vet)
print(type(vet))
####################################Matriz
matriz = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
print(matriz)
#matriz.shape -- quantidade de linhas e colunas da matriz
#matriz.size -- quantidade de elementos da matriz
#matriz.ndim -- quantidade de dimensões do vetor
####################################Matriz de zeros
matriz_zeros = np.zeros([2, 3], dtype = int)
print(matriz_zeros)
####################################Matriz de uns
matriz_uns = np.ones(3)
print(matriz_uns)
####################################Matriz identidade
matriz_identidade = np.eye(3)
print(matriz_identidade)
####################################Array com range
#arange(inicio = 0, fim, intervalo = 1, dtype = int)

veto = np.arange(100)
veto2 = np.arange(0, 100, 2)
veto3 = np.arange(50, 0, -1)
####################################Aleatoriedade
#np.random.randint(inicio = 0, fim, tamanho)
vetor_aleatorio = np.random.randint(0, 100, 10)
matriz_aleatoria = np.random.randint(0, 100, (3, 3))
