//
//  Sand.cpp
//  U1-Project-1-Nathansbud
//
//  Created by Zack Amiton on 2/15/17.
//
//

#include "Sand.hpp"
#include "ofMain.h"

Sand::Sand(ofVec2f sandPosition)
{
//  float posX = ofRandomWidth(), posY = ofRandomHeight();
  ofColor sandColor(ofRandom(255), ofRandom(255), ofRandom(255));
  ofSetColor(sandColor);
  ofFill();
  sandPos.set(sandPosition);
  grav.set(0, 10);
//  std::cout << "You made a thing and it's here did it work please say yes? Oh wait the thing is at " << sandPos << " and gravity is" << grav;
}

Sand::~Sand()
{
}

//void Sand::SetPosition(ofVec2f mousePosition)
//{
//  sandPos.set(mousePosition);
//}

void Sand::Draw()
{
  ofFill();
  ofDrawCircle(sandPos, radius);
}

void Sand::Update()
{
  Move();
  Draw();
}

void Sand::SetPos(ofVec2f sandPosition)
{
  sandPos.set(sandPosition);
}

void Sand::SetColor()
{
}

void Sand::Move()
{
  sandPos += grav;
  if(sandPos.y > ofGetHeight() - radius)
  {
    grav.set(0, 0);
    sandPos.y = ofGetHeight();
  }
}
