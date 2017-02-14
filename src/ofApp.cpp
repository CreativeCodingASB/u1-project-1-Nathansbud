#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  
  int listSize = 10;

  for(int i = 0; i < listSize; i++)
  {
	test.AddData();
  }
  
  text.load("arial")
  text.load("arial.ttf", 15, true, true);
}

//--------------------------------------------------------------
void ofApp::update(){
//    for(int i = 0; i < particles.GetLength(); i++)
//  {
////	particles.Get(i).Update();
//  }
}

//--------------------------------------------------------------
void ofApp::draw(){
//  for(int i = 0; i < particles.GetLength(); i++)
//  {
////	particles.Get(i).Draw();
//  }
  text.drawString("Does this work?", 30, 30);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  if(key == 'a')
  {
  }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
