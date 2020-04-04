#ifndef LIST_CPP
#define LIST_CPP
#include "List.hpp"
#include <iostream>

template<typename T>
List<T>::Element::Element(T data) : _next(NULL), _data(data) {}

template<typename T>
List<T>::List() : _start(NULL) {}

template<typename T>
void List<T>::push_back(T data)
{
  if(size() == 0)
  {
    _start = new Element(data);
  }
  else
  {
    Element* traverse = _start;
    while(traverse->_next != NULL)
    {
      traverse = traverse->_next;
    }
    traverse->_next = new Element(data);
  }
}

template<typename T>
void List<T>::print()
{
  if(size() == 0)
  {
    std::cout<<"The list is empty!"<<std::endl;
    return;
  }

  Element* traverse = _start;
  while(traverse->_next != NULL)
  {
    std::cout<<traverse->_data<<" ";
    traverse = traverse->_next;
  }
  std::cout<<traverse->_data<<std::endl;
}

template<typename T>
int List<T>::size()
{
  int size = 0;
  if(_start == NULL)
  {
    return 0;
  }

  Element* traverse = _start;
  ++size;
  
  while(traverse->_next != NULL)
  {
    ++size;
    traverse = traverse->_next;
  }
  return size;
}
#endif
