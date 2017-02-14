//
//  LinkedList.hpp
//  U1_Project1_Zack
//
//  Created by Zack Amiton on 2/10/17.
//
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>
#include "Node.hpp"
#include "Particle.hpp"

class LinkedList
{
    public:
        LinkedList();
        ~LinkedList();
    
//        void AddParticle();
        void Remove(int index);
//        void Remove(Data &p);
//        Particle& Get(int i);
  
        int  GetLength() { return _length; }
    
    private:
        int   _length;
        Node* _firstNode;
};

#endif /* LinkedList_hpp */
