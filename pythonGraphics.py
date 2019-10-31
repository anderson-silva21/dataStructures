import numpy as np
import matplotlib.pyplot as plt
  
x = np.arange(0, 50)
y = np.random.randint(100, size = 50)
y2 = np.random.randint(20, size = 50)

fig, (ax, ax2) = plt.subplots(figsize=(8, 5), ncols = 2, nrows = 1)
ax.plot(x, y, 'r--', label = 'Crescimento')
ax.set_xlabel('Eixo X')
ax.set_ylabel('Eixo Y')
ax.grid() #habilita o grid do grafico
ax.legend() #adiciona legenda

ax2.scatter(x, y2, label = 'Pontos')
ax2.legend() #adiciona legenda do ax2
#plt.show()

plt.tight_layout() #tira espaços extras da borda da imagem
plt.savefig('/home/todos/alunos/ap/a2150875/Área de Trabalho/graficos.png') #Adicionar o endereço para salvar a imagem
