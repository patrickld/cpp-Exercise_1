#include <iostream>
using namespace std;
// function main begins program execution
int main()
{
int a,b;
std::cin >> a;
std::cin >> b;
if (b%a==0)
cout<<a<<" is a multiple of "<<b<<endl;
else
cout<<a<<" is not a multiple of "<<b<<endl;
return 0; // indicates that program ended successfully
}
// end function main

