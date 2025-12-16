from cs1graphics import *
anis= Canvas( 300,200,bgColor="sky blue",'my world')

#sun

sun= Circle(50,(250,50))
sun.setFillColor('yellow')
anis.add(sun)

#house

home= Square(60,Point(140,130))
home.setFillColor('white')
anis.add(home)


#chimney
chiimney=Rectangle(15,28,Point(155,85))
chiimney.setColor('red')
anis.add(chiimney)

#tree

tree=Polygon(Point(50,80),Point(30,140),Point(70,140))
tree.setFillColor('darkGreen')
anis.add(tree)

#smoke
smoke= Path(Point(155,70),Point(150,65),Point(160,55),Point(155,50))
anis.add(smoke)

#sunray
sunray=path(point(225,75),Point(210,90))
sunray.setBorderColor('yellow')
sunray.setBorderWidth(6)
anis.add(sunray)
sunray2=Path(Point(275,75),Point(290,10))
anis.add(sunray2)
#grass
grass= Rectangle(300,80,Point(150,160))
grass.setFillColor('green')
grass.setDepth(75)
anis.add
