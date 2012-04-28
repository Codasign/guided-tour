bg = 30

def setup():
    # set up window
    size(800, 600)
    # set background color
    background(bg)


def draw():
    # set color of stroke
    stroke(mouseX%255, mouseY%255, 200)
    # draw line between (0,0) and mouse
    line(0, 0, mouseX, mouseY)


def mousePressed():
    # change stroke thickness when mouse button is pressed
    strokeWeight(float(mouseY)/height*7.)

def keyPressed():
    # clear the screen
    if key == 'c':
        background(bg)
    

