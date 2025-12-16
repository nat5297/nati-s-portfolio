from cs1robots import *
load_world("worlds/
hubo=Robot()
Ami=Robot(street=6)
hubo.set_pause(0.1)
hubo.set_trace('blue')
Ami.set_pause(0.1)
Ami.set_trace('red')
def right(robot):
    for i in range(3):
        robot.turn_left()
def go(robot):   
    while robot.front_is_clear():
        robot.move()
        if(robot.on_beeper()):
            robot.pick_beeper()
go(hubo)
hubo.turn_left()
hubo.move()
hubo.turn_left()
hubo.pick_beeper()
go(hubo)
right(hubo)
hubo.move()
right(hubo)
go(hubo)

go(Ami)
right(Ami)
Ami.move()
right(Ami)
Ami.pick_beeper()
go(Ami)
Ami.turn_left()
Ami.move()
Ami.turn_left()
go(Ami)
