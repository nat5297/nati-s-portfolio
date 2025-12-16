from cs1robots import *
import random
create_world()

n=input("Enter a random number: ")
x=random.randint(2,n)
y=random.randint(2,n)

hubo=Robot(avenue=x,street=y)
hubo.set_trace('blue')
hubo.set_pause(0.5)
