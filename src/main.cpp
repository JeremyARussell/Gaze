#include "ofMain.h"
#include "cvEyeTracker.h"
#include "ofAppGlutWindow.h"
//
//========================================================================
int main( ){

    ofAppGlutWindow window;
	ofSetupOpenGL(&window, 1400, 800, OF_WINDOW);
	ofRunApp( new cvEyeTracker() );

}

//Todo - Blue test
