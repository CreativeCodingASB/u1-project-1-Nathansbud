//
//  Sand.hpp
//  U1-Project-1-Nathansbud
//
//  Created by Zack Amiton on 2/15/17.
//
//

#ifndef Sand_hpp
#define Sand_hpp

#include <stdio.h>
#include "ofMain.h"

class Sand
{
  public:
	Sand(ofVec2f mousePos);
	~Sand();
  
	void Draw();
	void Update();
	void Move();
	void SetPos(ofVec2f sandPos);
	
	void SetColor();
	
	int GetRadius() {return radius;}
	ofVec2f GetPos() {return sandPos;}
	ofVec2f grav;
	
  private:
	ofVec2f sandPos;
	int radius = 5;
};


#endif /* Sand_hpp */
