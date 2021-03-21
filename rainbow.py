# # Python program to draw
# # Rainbow Benzene
# # using Turtle Programming
'''
import turtle #importing library
colors = ['red', 'white', 'blue', 'green', 'orange', 'yellow'] #list of colors
t = turtle.Pen() #
turtle.bgcolor('black')
for x in range(360):
	t.pencolor(colors[x%6])
	t.width(x/100 + 1)
	t.forward(x)
	t.left(59)
'''

# Python program to user input pattern
# using Turtle Programming
'''
import turtle #Outside_In
import turtle
import time
import random

print ("This program draws shapes based on the number you enter in a uniform pattern.")
num_str = input("Enter the side number of the shape you want to draw: ")
if num_str.isdigit():
	squares = int(num_str)

angle = 180 - 180*(squares-2)/squares

turtle.up

x = 0
y = 0
turtle.setpos(x, y)


numshapes = 8
for x in range(numshapes):
	turtle.color(random.random(), random.random(), random.random())
	x += 5
	y += 5
	turtle.forward(x)
	turtle.left(y)
	for i in range(squares):
		turtle.begin_fill()
		turtle.down()
		turtle.forward(40)
		turtle.left(angle)
		turtle.forward(40)
		print (turtle.pos())
		turtle.up()
		turtle.end_fill()

time.sleep(11)
turtle.bye()


'''

wait(mutex)
rc + +
if (rc == 1)
wait(wrt)
signal(mutex)
.
. READ THE OBJECT
.
wait(mutex)
rc - -
if (rc == 0)
signal(wrt)
signal(mutex)
