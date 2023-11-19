import pygame
import sys
import random
import math

# Inicializar pygame
pygame.init()

# Configuración de la pantalla
width, height = 800, 600
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Juegos Pirotécnicos")

# Definir colores
black = (0, 0, 0)
white = (255, 255, 255)
colors = [(255, 0, 0), (255, 165, 0), (255, 255, 0), (0, 255, 0), (0, 0, 255), (75, 0, 130), (238, 130, 238)]

# Clase para representar una partícula
class Particle:
    def __init__(self, x, y, color):
        self.x = x
        self.y = y
        self.color = color
        self.radius = 2
        self.angle = random.uniform(0, 2 * math.pi)
        self.speed = random.uniform(2, 5)

    def move(self):
        self.x += self.speed * math.cos(self.angle)
        self.y += self.speed * math.sin(self.angle)

    def draw(self):
        pygame.draw.circle(screen, self.color, (int(self.x), int(self.y)), self.radius)

# Función para generar una explosión de partículas
def create_explosion(x, y, num_particles):
    explosion_color = random.choice(colors)
    particles = [Particle(x, y, explosion_color) for _ in range(num_particles)]
    return particles

# Ciclo principal del juego
clock = pygame.time.Clock()
particles = []

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

    screen.fill(black)

    # Actualizar y dibujar partículas
    for particle in particles:
        particle.move()
        particle.draw()

    # Generar una nueva explosión al hacer clic con el ratón
    if pygame.mouse.get_pressed()[0]:
        mouse_x, mouse_y = pygame.mouse.get_pos()
        particles += create_explosion(mouse_x, mouse_y, 30)

    # Eliminar partículas que salen de la pantalla
    particles = [particle for particle in particles if 0 <= particle.x <= width and 0 <= particle.y <= height]

    pygame.display.flip()
    clock.tick(60)