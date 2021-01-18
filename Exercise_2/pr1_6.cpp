#include <iostream>
using namespace std;
#include <cmath>

//Counter for recursive calls
int a=0; 

//Function for finding the n-th Fibonacci-number
int fibonacci(int n=0){
  a++;
  if(n==1)
    return n-1;
  else if(n==2)
    return n-1;
  else
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
  int n;
  cout<<"Enter the wanted number of the Fibonacci sequence: ";
  cin>>n;
  cout<<"The "<<n<<". Fibonacci number is "<<fibonacci(n)<<endl;
  cout<< "The number of recursive calls is: "<<a<<endl;
  return 0;
}