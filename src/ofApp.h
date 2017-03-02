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
		
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		
		void checkDistance();
		
		ofVec2f mousePos = ofVec2f(mouseX, mouseY);
  
	private:
		LinkedList test = LinkedList(ofVec2f(mouseX, mouseY));
		ofTrueTypeFont text;
		Sand sand = Sand(ofVec2f(mouseX, mouseY));
		int listSize = 10;
		bool upressedbro, addSand;

};
