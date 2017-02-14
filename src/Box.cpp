//
//  Box.cpp
//  U1_Project1_Zack
//
//  Created by Zack Amiton on 2/13/17.
//
//

#include "Box.hpp"

Box::Box(int _boxPosX, int _boxPosY)
{
  _boxWidth = ofRandom(10, 50);
  _boxHeight = ofRandom(10, 50);
}
