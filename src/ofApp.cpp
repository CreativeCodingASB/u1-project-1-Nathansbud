#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  
  for(int i = 0; i < listSize; i++)
  {
	test.AddData();
  }
  
//  text.load("arial.ttf", 15, true, true);
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < test.GetLength(); i++)
  {
//	test.Get(i).Update();
  }
}

//--------------------------------------------------------------
void ofApp::draw(){

  for(int i = 0; i < test.GetLength(); i++)
  {
	test.Get(i).Draw();
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
//  if(key == 'a')
//  {
//	sand.~Sand();
//  }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
