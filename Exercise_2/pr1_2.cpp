#include <iostream>
using namespace std;
#include<cmath>

//Function for finding the position of a moving body 
void position_of_a_moving_body(){
  float p,s,a;
  cout<<"enter the initial position, the speed and the acceleration: " ;
  cin>>p>>s>>a;
  int positions;
  cout<<"how many times you want to display the position of the moving body? ";
  cin>>positions; 
  double timing;
  cout<<"how often (in seconds) you want to update the position of the moving object? ";
  cin>>timing;
  cout<<"–––––––––––––––––––––––"<<endl;
  cout<<endl;
  cout<<"Acceleration: "<<a<<" Initial speed: "<<s<<" Initial position: "<<p<<" Number of times: "<<positions <<" Dela t: "<<timing<<endl;

  //Formula for iterating the position at various times
  double time=0;
  for(int i=0;i<positions*timing;i+=timing){
    double p2=p+s*time+0.5*a*pow(time,2);
    cout<<"At time "<<time<<" the position is "<<p2<<endl;
  //  time+=timing;
  }
}

int main(){
  position_of_a_moving_body();
  return 0;
}