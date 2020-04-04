#ifndef LIST_CPP
#define LIST_CPP
#include "List.hpp"
#include <iostream>

template<typename T>
List<T>::Element::Element(T data) : _data(data), _next(NULL) {}

template<typename T>
List<T>::List() : _start(NULL), _size(0) {}

template<typename T>
void List<T>::push_back(T data)
{
  if(_size == 0)
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
  ++_size;
}

template<typename T>
void List<T>::print()
{
  if(_size == 0)
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
  return _size;
}
#endif
