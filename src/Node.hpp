//
//  Node.hpp
//  ofTestSketch
//
//  Created by Linus on 07/02/17.
//
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include "Particle.hpp"

class Node
{
    public:
        Node();
        ~Node();
    
        void      SetNext(Node* &n);
        void      SetData(int& p);
        Node*     GetNext();
        int& GetData();
        int  GetCopy();
        void      operator=(const Node& n);
    
    private:
		int* _data;
        Node*     _nextNode;
};

#endif /* Node_hpp */
