/*
  Guided Tour Example
  
  Example demonstrating Processing an comparing
  it to openFrameworks, Cinder, and processing.py.
  
  Written by Becky Stewart
  April 2012
  becky@codasign.com
*/

int bg = 30;

void setup() {
  // set up window
  size(800, 600); 
  // set background color
  background(bg);
}

void draw() {
  // set color of stroke
  stroke(mouseX%255, mouseY%255, 200);
  // draw line between (0,0) and mouse
  line(0, 0, mouseX, mouseY);
}

void mousePressed() {
  // change stroke thickness when mouse button is pressed
  strokeWeight(float(mouseY)/height*7);
}

void keyPressed() {
  switch(key) {
  // change color mode to RGB
  case 'r':
    colorMode(RGB);
    break;
  //change color mode to HSB
  case 'h':
    colorMode(HSB);
    break;
  // clear the screen
  case 'c':
    background(bg);
  }
}

