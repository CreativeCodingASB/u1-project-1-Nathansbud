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
	Sand();
	~Sand();
  
	void Draw();
	void Update();
  
  private:
	ofVec2f sandPos;
	ofVec2f grav;
	int radius = 5;
};


#endif /* Sand_hpp */
