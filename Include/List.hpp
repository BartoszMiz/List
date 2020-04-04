#pragma once
#include <cstdlib>

template<typename T>
struct List
{
private:
  struct Element
  {
    Element* _next;
    T _data;

    Element(T data);
  };

  Element* _start;
  uint _size;
  
public:
  List();
  void push_back(T data);
  void print();
  int size();
};

#include "List.cpp"