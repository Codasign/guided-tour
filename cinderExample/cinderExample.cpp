#include "cinder/app/AppBasic.h"
#include "cinder/Rand.h"
using namespace ci;
using namespace ci::app;

#include <list>
using namespace std;

void staticMouseDownHandler( MouseEvent event );
void staticMouseUpHandler( MouseEvent event );

//--------------------------------------------------------------
// We'll create a new Cinder Application by deriving from the BasicApp class
class CinderExample : public AppBasic {
 public:
    void prepareSettings( Settings *settings);
    void setup();
	// Cinder will always call this function whenever the user presses the mouse
	void mouseDown( MouseEvent event );
    void mouseMove( MouseEvent event );
	void keyDown( KeyEvent event );
    

	// this will store the background color value
    float bg;
};

//--------------------------------------------------------------
void CinderExample::prepareSettings( Settings *settings ){
    settings->setWindowSize( 800, 600 );
}

//--------------------------------------------------------------
void CinderExample::setup() {
    // set the background color and clear the depth buffer
    bg = 30./255.;
    gl::clear( Color( bg, bg, bg ), true );
}

//--------------------------------------------------------------
void CinderExample::mouseDown( MouseEvent event )
{
	// get the mouse position
    Vec2f mMouseLoc = event.getPos();
    
    // set the line width
    glLineWidth(mMouseLoc.y/getWindowHeight()*7.0); 
}

//--------------------------------------------------------------
void CinderExample::mouseMove( MouseEvent event ) {
    // get the mouse position
    Vec2f mMouseLoc = event.getPos();
    
    // set the color
	glColor3f( (int(mMouseLoc.x)%255)/255.0,(int(mMouseLoc.y)%255)/255.0, 200.0 );
    
    // draw the line
    gl::drawLine( Vec2f( 0, 0 ), mMouseLoc );
}

//--------------------------------------------------------------
void CinderExample::keyDown( KeyEvent event )
{
    // reset background
	if( event.getChar() == 'c' )
		gl::clear( Color( bg, bg, bg ) );
}

//--------------------------------------------------------------
// This line tells Flint to actually create the application
CINDER_APP_BASIC( CinderExample, RendererGl )