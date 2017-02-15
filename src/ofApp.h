#pragma once

#include "ofMain.h"
#include "LinkedList.hpp"
#include "Sand.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
	private:
		LinkedList test;
		ofTrueTypeFont text;
		Sand sand;
		int listSize = 10;

};
