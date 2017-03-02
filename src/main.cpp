#include "ofMain.h"
#include "ofApp.h"
#include <iostream>
//int r, b, g;

//========================================================================
int main( ){
	ofSetupOpenGL(1440,900, OF_GAME_MODE);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
//	std::cout << r;
	ofRunApp(new ofApp());

}
