#include <iostream>
using namespace std;
#include<cmath>

int main() {
  //input of positions
  int n=5;
  //cin>>n;
  
  //input of parameters
  double position = 0;
  int x0=0,v=10,a=2;
  double t=0.5;
  //cin>>x0,v,a,t;
  
  //formula
  position=x0+v*t+1/2*a*pow(t,2);
  
  return 0;
}

/*The time evolution of a body that is horizontally moving in a mono-dimensional space with speed v, acceleration a and initial position x0 is governed by the following equation:
x(t)=x0 +v·t+1/2a·t2
Write a C++ function that displays the position of a body moving at fixed interval of time ∆t. The function should display n positions where n is given as input. The output should have the following format:
enter the initial position, the speed and the acceleration: 0 10 2
how many times you want to display the position of the moving body? 5
how often (in seconds) you want to update the position of the moving object?  0.5
*/