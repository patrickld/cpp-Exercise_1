#include <iostream>
#include <vector> 
#include "Stack.hpp"

int main() {
  Stack<int> s = Stack<int>(5);
  s.print();
  s.push(3);
  s.push(4);
  s.push(1);
  s.push(5);
  s.push(2);
  s.push(6);
  s.print();
  s.pop();
  s.print();
  s.push(6);
  s.print();
  s.pop();
  s.print();
  s.pop();
  s.print();
  s.pop();
  s.print();
  s.pop();
  s.print();
  s.pop();
  s.print();

  return 0;
}