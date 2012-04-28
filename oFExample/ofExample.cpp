#include "oFExample.h"

//--------------------------------------------------------------
void oFExample::setup(){
    // set background color
    bg = 30;
    
    // need to turn off the auto refresh of the background
    ofSetBackgroundAuto(false);
    ofBackground(bg);
}

//--------------------------------------------------------------
void oFExample::update(){

}

//--------------------------------------------------------------
void oFExample::draw(){
    // set the color of the line
    ofSetColor(mouseX%255, mouseY%255, 200);
    // draw line between (0,0) and mouse
    ofLine(0, 0, mouseX, mouseY);
}

//--------------------------------------------------------------
void oFExample::keyPressed(int key){
    if (key == 'c') {
        // clear the screen
        ofBackground(bg);
    }
}

//--------------------------------------------------------------
void oFExample::keyReleased(int key){

}

//--------------------------------------------------------------
void oFExample::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void oFExample::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void oFExample::mousePressed(int x, int y, int button){
    // change line thickness when mouse button is pressed
    ofSetLineWidth(float(mouseY)/ofGetScreenHeight()*7.0);
    cout << float(mouseY)/ofGetScreenHeight()*7.0;
}

//--------------------------------------------------------------
void oFExample::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void oFExample::windowResized(int w, int h){

}

//--------------------------------------------------------------
void oFExample::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void oFExample::dragEvent(ofDragInfo dragInfo){ 

}