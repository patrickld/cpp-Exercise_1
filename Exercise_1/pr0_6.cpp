#include <iostream>
using namespace std;
// function main begins program execution
int main()
{
int i=5,j;
while(i>0){
  j=0;
  while(j>0){
  if(j==i){
    cout<<"*"<<endl;
  }
  else{
    cout<<"*";
  }    
  j++;
  }
i--;
}
return 0;
}
/*
  int i=0,j;
  while(i<5){
    j=0;
    while(j<=i){
      if(j==i){
      cout <<"*"<< endl;
      }
      else{
        cout <<"*";
      }
    j+=1;
    }
    i+=1;  
   }
  return 0; // indicates that program ended successfully
}
*/