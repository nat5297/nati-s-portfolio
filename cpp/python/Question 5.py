#        Group_members                  Id

@nat_5297#  1. Sebonsa Ahmed Ali             Ugr/37738/17

#  2. Abdulhekim Abu                Ugr/36303/17

#  3. Desalegn Hailu                 Ugr/38276/17

from cs1graphics import *
anis = Canvas(1200,700,bgColor = "sky blue")

#grass
g=Rectangle(1200,100,Point(600,650))
g.setFillColor("green")
g.setDepth(80)
anis.add(g)
#clouds
cloud=Layer()
cloud1 = Ellipse(200,100,Point(200,100))
cloud1.setFillColor('white')
cloud1.setBorderColor('white')
cloud.add(cloud1)
cloud2=Ellipse(50,100,Point(250,75))
cloud2.setFillColor('white')
cloud2.setBorderColor('white')
cloud2.rotate(40)
cloud.add(cloud2)
cloud3=cloud2.clone()
cloud3.rotate(50)
cloud3.move(10,0)
cloud.add(cloud3)
cloud4=cloud2.clone()
cloud4.rotate(50)
cloud4.move(25,40)
cloud.add(cloud4)
cloud5=cloud4.clone()
cloud5.move(-50,10)
cloud5.rotate(-40)
cloud.add(cloud5)
cloud6=cloud5.clone()
cloud.add(cloud6)
cloud6.move(-90,10)
cloud6.rotate(40)
cloud7=cloud6.clone()
cloud7.move(-20,-20)
cloud.add(cloud7)
cloud.scale(0.75)
anis.add(cloud)

cc=cloud.clone()
cc.move(350,0)
anis.add(cc)

ccc=cloud.clone()
ccc.move(900,0)
anis.add(ccc)

cccc=cloud.clone()
cccc.move(580,0)
anis.add(cccc) 

#home
home=Layer()

front=Rectangle(250,200,Point(780,500))
front.setFillColor('red')
front.setBorderWidth(4)
home.add(front)

window=Square(80,Point(710,485))
window.setFillColor('white')
window.setBorderWidth(4)
home.add(window)
wp1=Path(Point(670,485),Point(750,485))
wp1.setBorderWidth(4)
home.add(wp1)

wp2=Path(Point(710,445),Point(710,525))
wp2.setBorderWidth(4)
home.add(wp2)

door=Rectangle(80,170,Point(832,515))
door.setFillColor('grey')
door.setBorderWidth(4)
home.add(door)

pus=Rectangle(45,100,Point(710,320))
pus.setFillColor('gold')
home.add(pus)

top=Polygon(Point(635,400),Point(780,250),Point(925,400))
top.setFillColor('black')
home.add(top)
anis.add(home)

#person
person=Layer()
stomach=Ellipse(30,90,Point(500,490))
stomach.setFillColor('pink')
person.add(stomach)

head=Circle(20,Point(500,426))
head.setFillColor((255,153,0))
person.add(head)

eye_l=Circle(1,Point(490,420))
person.add(eye_l)

eye_r=Circle(1,Point(510,420))
person.add(eye_r)



mouth=ClosedSpline(Point(495,433),Point(500,436),Point(505,433))
person.add(mouth)
leg1=Path(Point(496,535),Point(496,600))
leg2=Path(Point(504,535),Point(504,600))
person.add(leg1)
person.add(leg2)

hand1=Path(Point(485,470),Point(445,440))
hand2=Path(Point(515,470),Point(555,440))
person.add(hand1)
person.add(hand2)
person.move(50,0)
anis.add(person)
#comments
comment=Layer()
c1=Ellipse(16,18,Point(468,400))
c2=Ellipse(100,60,Point(410,360))
comment.add(c1)
comment.add(c2)
t=Text('python assignment',9,Point(410,360))
comment.add(t)
comment.move(50,0)
anis.add(comment)

#trees
tree1=Layer()
leave=Polygon(Point(10,200),Point(70,100),Point(130,200),Point(90,200),Point(130,260),Point(90,260),Point(130,320),Point(10,320),Point(50,260),Point(10,260),Point(50,200))
leave.setFillColor('green')
leave.scale(1.2)
leave.move(0,50)
tree1.add(leave)

stem=Rectangle(70,207,Point(80,497))
stem.setFillColor('brown')
tree1.add(stem)
tree2=tree1.clone()
tree2.scale(0.8)
tree2.moveTo(150,120)
tree3=tree1.clone()
tree3.scale(0.9)
tree3.moveTo(260,60)
tree4=tree2.clone()
tree4.move(780,0)
tree5=tree3.clone()
tree5.move(780,0)
anis.add(tree1)
anis.add(tree2)
anis.add(tree3)
anis.add(tree4)
anis.add(tree5)

sun=Circle(50,Point(50,75))
sun.setFillColor("yellow")
anis.add(sun)
for i in range(10000):
    sun.move(0.11,0)
#group member

name=Layer()
group_member=Text('Name             Id',20,Point(625,670))
name.add(group_member)
name1=Text('Sebonsa Ahmed Ali       Ugr/37738/17',15,Point(625,700))
name.add(name1)
name2=Text('Abdulhekim Abu     Ugr/36303/17',15,Point(625,725))
name.add(name2)
name3=Text('Desalegn Hailu       Ugr/38276/17',15,Point(625,750))
name.add(name3)

anis.add(name)

for i in range(2000):
    name.move(0,-0.3)

