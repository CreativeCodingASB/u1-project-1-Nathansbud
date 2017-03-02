//
//  LinkedList.cpp
//  U1_Project1_Zack
//
//  Created by Zack Amiton on 2/10/17.
//
//

#include "LinkedList.hpp"

LinkedList::LinkedList(ofVec2f mousePos)
{
  _length = 1;
  _firstNode = new Node(mousePos);
}

LinkedList::~LinkedList()
{
    int maxLength = _length - 1;
    
    for(int i = maxLength; i > 0; i--)
    {
        Remove(i);
    }
    delete _firstNode;
}

void LinkedList::AddData(ofVec2f mousePos)
{
    Node* currentNode = _firstNode;
    
    while(currentNode -> GetNext())
    {
        currentNode = currentNode -> GetNext();
    }
    
    Node* newNode = new Node(mousePos);
    currentNode -> SetNext(newNode);
    _length++;
    newNode = 0;
    delete newNode;
}

void LinkedList::Remove(int index)
{
    assert(index >= 0 && index < _length);
    
    Node* currentNode = _firstNode;
    Node* previousNode = _firstNode;
    int i = 0;
    while(currentNode != NULL)
    {
        if(i == index)
        {
            if(i == 0)
            {
                if(_firstNode -> GetNext())
                {
                  Node* garbage = _firstNode;
                  _firstNode = _firstNode -> GetNext();
                  delete garbage;
                }
                
                Node* garbage = _firstNode;
                _firstNode = NULL;
                delete garbage;
            }
            else
            {
                Node* nextNode = currentNode -> GetNext();
                previousNode -> SetNext(nextNode);
                delete currentNode;
            }
            _length--;
            break;
        }
        
        previousNode = currentNode;
        currentNode = currentNode -> GetNext();
        i++;
    }
}


Sand& LinkedList::Get(int i)
{
	assert(i >= 0 && i < _length);
    
    int j = 0;
    Node* n = _firstNode;
    
    while(n != NULL)
    {
        if(i == j)
        {
            return n -> GetData();
        }
        
        n = n -> GetNext();
        j++;
    }
}

void LinkedList::Clear()
{
    int maxLength = _length-1;
    
    for(int i = maxLength; i > 0; i--)
    {
        Remove(i);
    }
}

