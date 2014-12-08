#pragma once

#include "ofMain.h"
#include "particle.h"
#include "vectorField.h"

#include "ofxOpenCv.h"


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        vector <particle> particles;
        vectorField VF;
    
    
        float prevMouseX;
        float prevMouseY;
        
        bool bDrawDiagnostic;
    
        ofVideoGrabber 		vidGrabber;
        ofxCvGrayscaleImage synthImg;

    
        ofxCvColorImage		colorImg;
        
        ofxCvGrayscaleImage     grayImage;
        ofxCvGrayscaleImage     grayBg;
        ofxCvGrayscaleImage 	grayDiff;
        ofxCvGrayscaleImage		grayDiffSmall;
        
        int 				threshold;
        bool				bLearnBakground;
        
        bool				bForceInward;

		
};