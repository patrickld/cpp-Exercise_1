#include <iostream>
using namespace std;
// function main begins program execution
int main()
{
long n,i=1;
std::cin >> n;
while(n>0){
  i=i*n;
  n-=1;
}
cout<<i<<endl;
return 0; // indicates that program ended successfully
}
// end function main

/*Write a C++ program that displays the factorial of an integer (int) number taken as input. The program should use a while loop. Test up to which input value the output displayed by the program is correct. Repeat the test using short, long long long and the type of the input variable. REMINDER: all of short, int, long long long types are suitable to store integer valued variables however each of them use a memory location of different capacity (in terms of number of bytes).

*/
