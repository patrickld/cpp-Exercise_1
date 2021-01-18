#include <iostream>
using namespace std;

//Function for swapping variables
void swap(int &v1,int &v2){
  //Temporary new Variable
  int new_variable=v1;
  v1=v2;
  v2=new_variable;
}

int main() {
  int a,b;
  cin>>a>>b;
  swap(a,b);
  cout<<"The first number is now: "<<a<<endl;
  cout<<"The second number is  now: "<<b<<endl;
  return 0;
}

