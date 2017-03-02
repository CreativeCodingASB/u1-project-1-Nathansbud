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
#include "Sand.hpp"

class LinkedList
{
    public:
        LinkedList(ofVec2f mousePos);
        ~LinkedList();
    
        void AddData(ofVec2f mousePos);
        void Remove(int index);
		void Clear();
        Sand& Get(int i);
  
        int  GetLength() { return _length; }
    
    private:
        int   _length;
        Node* _firstNode;
};

#endif /* LinkedList_hpp */
