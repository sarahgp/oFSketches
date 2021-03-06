#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    
    #ifdef DEBUG
	ofSetupOpenGL(1280, 480, OF_WINDOW);			// <-------- setup the GL context
    
    #else
    ofSetupOpenGL(640, 480, OF_FULLSCREEN);
    
    #endif
    
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
