//
//  LinkedList.cpp
//  U1_Project1_Zack
//
//  Created by Zack Amiton on 2/10/17.
//
//

#include "LinkedList.hpp"

LinkedList::LinkedList()
{
  _length = 1;
  _firstNode = new Node();
}

LinkedList::~LinkedList()
{
  int maxLength = _length -1;
  for(int i = maxLength; i > 0; i--)
  {
	Remove(i);
  }
  delete _firstNode;
}

void LinkedList::AddData()
{
  Node* currentNode = _firstNode;
  while(currentNode->GetNext())
  {
	currentNode = currentNode->GetNext();
  }
  
  Node* newNode = new Node();
  currentNode->SetNext(newNode);
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
	  Node* garbage = _firstNode;
	  _firstNode = NULL;
	  delete garbage;
	}
	else
	{
	  Node* garbage = _firstNode;
	  _firstNode = NULL;
	  delete garbage;
	}
	_length--;
	break;
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
	  return n->GetData();
	}
	n = n->GetNext();
	j++;
  }
}



