#pragma once

#include "ofMain.h"
#include "LinkedList.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
	private:
//		LinkedList particles;
};
