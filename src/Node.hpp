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
#include "Sand.hpp"

class Node
{
    public:
        Node();
        ~Node();
    
        void      SetNext(Node* &n);
        void      SetData(Sand& p);
        Node*     GetNext();
        Sand&	  GetData();
        Sand	  GetCopy();
        void      operator=(const Node& n);
    
    private:
		Sand*	  _data;
        Node*     _nextNode;
};

#endif /* Node_hpp */
