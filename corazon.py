import turtle

# Configuración inicial de la pantalla
turtle.bgcolor("white")
turtle.speed(2)
turtle.pensize(3)
turtle.pencolor("red")

# Función para dibujar un corazón
def draw_heart():
    turtle.fillcolor("red")
    turtle.begin_fill()
    turtle.left(50)
    turtle.forward(133)
    turtle.circle(50, 200)
    turtle.right(140)
    turtle.circle(50, 200)
    turtle.forward(133)
    turtle.end_fill()

# Dibujar el corazón
draw_heart()

# Ocultar la tortuga y mostrar la pantalla
turtle.hideturtle()
turtle.done()
