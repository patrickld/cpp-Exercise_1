#include <iostream>
using namespace std;
#include <cmath>

//Function for finding the n-th Fibonacci-number (Non-Recursive)
void fibonacci(int n){
  int a=0;
  int b=1;
  if(n==1)
    cout<<"The "<<n<<". Fibonacci number is "<<a<<endl;
  else if(n==2)
    cout<<"The "<<n<<". Fibonacci number is "<<b<<endl;
  else{
    int value;
    for(int i=3; i<=n; i++){
      value=a+b;
      a=b;
      b=value;
    }
    cout<<"The "<<n<<". Fibonacci number is "<<value<<endl;
  }
}

int main(){
  int n;
  cout<<"Enter the wanted number of the Fibonacci sequence: ";
  cin>>n;
  fibonacci(n);
  return 0;
}