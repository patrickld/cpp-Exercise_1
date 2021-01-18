#include <iostream>
using namespace std;
#include <cmath>

//Global counters
int c1=0,c2=0;

//Function for finding power of integer numbers using first method
int p1(int n,int a){
  c1++;
  if(n==0)
    return 1;
  return a*p1(n-1,a);
}
//The relationship between the exponent n and the number of recursive calls r for the first function is r=n+1


//Function for finding power of integer numbers using second method
int p2(int n,int a){
  c2++;
  if(n==0)
    return 1;
  else if((n%2)==0)
    return p2(n/2,a)*p2(n/2,a);
  else
    return p2(n/2,a)*p2(n/2,a)*a;
}
//The relationship between the exponent n and the number of recursive calls r for the second function is r=(n-1)*2+1


//Function for output of the number of recursive calls
void test(int n, int a){
  cout<<"The Number of recursive calls using the first method is "<<c1<<" and using the second method is "<<c2<<endl;
}

int main(){
  int n=0,a=0;
  cout<<"Enter the value of the number: ";
  cin>>a;
  cout<<"Enter the value to which the number is taken to the power of: ";
  cin>>n;
  cout<<"Using the first method the number "<<a<<" to the power of "<<n<<" is "<<p1(n,a)<<endl; 
  cout<<"Using the second method the number "<<a<<" to the power of "<<n<<" is "<<p2(n,a)<<endl;
  test(n,a);
  return 0;
}