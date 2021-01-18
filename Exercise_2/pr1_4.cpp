#include <iostream>
using namespace std;
#include<cmath>

//Function for Floyd Triangle
void floyd_triangle(int a){
  int i=1;
  for(int j=1; j<=a; j++){
    int sum_of_row=(j*(pow(j,2)+1))/2;
    int temp_row_sum=0;
    while(temp_row_sum<sum_of_row){
      cout<<i<<" ";
      temp_row_sum+=i; 
      i++;
    }
    cout << endl;
  }
}

int main(){
  int n;
  cout << "Wanted number of rows for the Floyd triangle: ";
  cin>>n;
  floyd_triangle(n);
  return 0;
}