#include <iostream>
using namespace std;
#include<cmath>

//declaration of a function to check if a point is within a circle
int point_within_circle(int,int,int,int,int);

int main() {
  //input of the data
  cout << "Put in the the X-coordinate, X-coordinate and radius of the circle:";
  //data of the circle
  int x=0,y=0,r=0;
  cin>>x>>y>>r;
  //data of the point
  int px=0,py=0;
  cout << "Put in the the X- and X-coordinate of the point:";
  cin>>px>>py;
  //checking whether the point is in the circle
  if(point_within_circle(x,y,r,px,py))
    cout<<"The point is in the circle";
  else
    cout<<"The point is outside of the circle";
  return 0;
}

//definition of a function to check if a point is within a circle
int point_within_circle(int x,int y,int r,int px,int py){
  int dx=(px-x),dy=(py-y);
  int d = pow(r,2) - (pow(dx,2)+pow(dy,2));
  if (d>=0)
    return true; 
  return false ;
}d