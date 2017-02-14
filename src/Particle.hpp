//
//  Particle.hpp
//  U1_Project1_Zack
//
//  Created by Zack Amiton on 2/10/17.
//
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"

class Particle
{
    public:
        Particle();
        Particle(float x, float y);
        ~Particle();
    
        void Draw();
        void Update();
    
    private:
        ofVec2f _position;
        float   _radius;
};

#endif /* Particle_hpp */
