import numpy as np
import matplotlib.pyplot as plt

# Funciones paramétricas
def x_parametric(t, c):
    return 2 * c * t - 4 * t**3

def y_parametric(t, c):
    return -c * t**2 + 3 * t**4

# Valores de t
t_values = np.linspace(-2, 2, 100)

# Valores de c para graficar 10 curvas diferentes
c_values = np.linspace(1, 10, 10)

# Graficar las curvas para diferentes valores de c
for c in c_values:
    x_values = x_parametric(t_values, c)
    y_values = y_parametric(t_values, c)
    plt.plot(x_values, y_values, label=f'c = {c}')

# Configuración del gráfico
plt.title('Curvas Catastróficas Cola de Golondrina')
plt.xlabel('x')
plt.ylabel('y')
plt.legend()
plt.grid(True)
plt.show()