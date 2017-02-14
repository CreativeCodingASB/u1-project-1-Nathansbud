//
//  Particle.cpp
//  U1_Project1_Zack
//
//  Created by Zack Amiton on 2/10/17.
//
//

#include "Particle.hpp"

Particle::Particle()
{
    float rangeX = ofGetWidth();
    float rangeY = ofGetHeight();
    
    _position.set( ofRandom(rangeX), ofRandom(rangeY));
    _radius = 2;
    std::cout << "Particle created at: " << _position.x << ", " << _position.y << "\n";
}

Particle::Particle(float x, float y)
{
    _position.set(x, y);
}

Particle::~Particle()
{
}

void Particle::Draw()
{
    ofDrawCircle(_position, _radius);
}

void Particle::Update()
{
    ofVec2f direction;
    float rangeX = ofGetWidth();
    float rangeY = ofGetHeight();
    direction.set( ofRandom(-rangeX, rangeX), ofRandom( -rangeY, rangeY));
    direction.normalize();
    _position += direction;
}

