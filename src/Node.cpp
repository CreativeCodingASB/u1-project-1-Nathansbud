//
//  Node.cpp
//  U1_Project1_Zack
//
//  Created by Zack Amiton on 2/10/17.
//
//

#include "Node.hpp"
#include "ofMain.h"

Node::Node()
{
  _nextNode = nullptr;
}

Node::~Node()
{
  _nextNode = NULL;
  delete _nextNode;
  delete _data;
}

Node* Node::GetNext()
{
  return _nextNode;
}

int& Node::GetData()
{
  return *_data;
}

int Node::GetCopy()
{
  return *_data;
}

void Node::SetNext(Node* &n)
{
  if(!_nextNode)
  {
	_nextNode = n;
	return;
  }
}

void Node::SetData(int& p)
{
  int* garbage = _data;
  _data = &p;
  
  delete garbage;
}



