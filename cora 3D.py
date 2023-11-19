import matplotlib.pyplot as plt
import numpy as np

# Parámetros del corazón en 3D
t = np.linspace(0, 2 * np.pi, 100)
x = 16 * np.sin(t)**3
y = 13 * np.cos(t) - 5 * np.cos(2*t) - 2 * np.cos(3*t) - np.cos(4*t)

# Configuración del gráfico
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

# Dibujar el corazón en 3D
ax.plot(x, y, t, color='red', linewidth=2)

# Mostrar el gráfico
plt.show()