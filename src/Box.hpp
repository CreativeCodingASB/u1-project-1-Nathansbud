//
//  Box.hpp
//  U1_Project1_Zack
//
//  Created by Zack Amiton on 2/13/17.
//
//

#ifndef Box_hpp
#define Box_hpp

#include <stdio.h>
#include "ofMain.h"

class Box
{
  public:
	Box(int _boxPosX, int _boxPosY);
	~Box();
	void Draw();
	void Update();
	
  private:
	ofVec2f _position;
	int _boxWidth, boxHeight;
};

#endif /* Box_hpp */
