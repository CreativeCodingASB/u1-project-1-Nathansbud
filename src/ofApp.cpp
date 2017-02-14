#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  
  int particleSize = 100;

  for(int i = 0; i < particleSize; i++)
  {
//	particles.AddParticle();
  }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < particles.GetLength(); i++)
  {
//	particles.Get(i).Update();
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  for(int i = 0; i < particles.GetLength(); i++)
  {
//	particles.Get(i).Draw();
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  if(key == 'a')
  {
//	particles.~LinkedList();
  }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
