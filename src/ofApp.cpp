#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  for(int i = 0; i < listSize; i++)
  {
	test.AddData(mousePos);
  }
  ofHideCursor();
}

//--------------------------------------------------------------
void ofApp::update(){
  
  mousePos.set(mouseX, mouseY);
}

//--------------------------------------------------------------
void ofApp::draw(){
  ofBackground(50);
  if(addSand)
  {
	test.AddData(mousePos);
  }
  
  test.Get(0).SetPos(mousePos);
  test.Get(0).Draw();

  for(int i = 1; i < test.GetLength(); i++)
  {
	test.Get(i).Update();
  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  if(key == 'a')
  {
	test.Clear();
  }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------

void ofApp::mousePressed(int x, int y, int button)
{
  upressedbro = true;
  if(button == 0 && upressedbro)
  {
	addSand = true;
  }
}

void ofApp::mouseReleased(int x, int y, int button)
{
  upressedbro = false;
  if(button == 0 && !upressedbro)
  {
	addSand = false;
  }
}

void ofApp::checkDistance()
{
  for (int i = 0; i < listSize; i++)
  {
    for (int j = 0; j < listSize; j++)
    {
        if (i == j) //If i == j, ignoreÑthey're the same particle
        {
          continue;
        }
		
		ofVec2f p1 = test.Get(i).GetPos();
		ofVec2f p2 = test.Get(j).GetPos();
		
		float dist = ofDist(p1.x, p1.y, p2.x, p2.y);
		
		if(dist < test.Get(i).GetRadius())
		{
		  test.Get(i).grav.set(0, 0);
		}
    }
  }
}
