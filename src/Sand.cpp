//
//  Sand.cpp
//  U1-Project-1-Nathansbud
//
//  Created by Zack Amiton on 2/15/17.
//
//

#include "Sand.hpp"
#include "ofMain.h"

Sand::Sand()
{
  float posX = ofGetWidth(), posY = ofGetHeight();
  grav.set(0, 10);
  sandPos.set(ofRandom(posX), ofRandom(posY));
  std::cout << "You made a thing and it's here did it work please say yes? Oh wait the thing is at " << sandPos;
}

Sand::~Sand()
{
//  delete &sandPos;
}

void Sand::Draw()
{
  ofSetColor(255, 0, 255);
  ofFill();
  ofDrawCircle(sandPos, radius);
}

void Sand::Update()
{
  sandPos += grav;
}
