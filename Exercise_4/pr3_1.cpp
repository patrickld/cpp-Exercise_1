https://www.codegrepper.com/code-examples/cpp/divide+two+polynomials+c%2B%2B
https://www.codegrepper.com/code-examples/cpp/polynomial+operations+using+c%2B%2B

#include <iostream>
using namespace std;

double * read_poly(int &n){
  cout << "il grado: ";
  cin >> n;
  double * c=new double[n+1];
  for(int i=0;i<=n;i++){
    cout << "coefficient of degree " << i << ": ";
    cin >> c[i];
  }
  return c;
}

void print_poly(double *c, int n){
  int i;
  cout << c[0];
  if(n>0)
    cout << " + ";
  for(i=1;i<n;i++)
    cout << c[i] << "*x^" << i << " + ";
  if(n>0)
    cout << c[n] << "*x^" << i;
  cout << endl;
}

//return maximum of two integers
int max(int m, int n){
  return (m > n)? m: n;
} 

//Calculation of the polynomial value for a certain position x (returns a real number)
double * poli_value(double * p1, int d1, double * p2, int d2, int & dr){

}

//sum of two polynomials (returns a polynomial)
double * poli_sum(double * p1, int d1, double * p2, int d2, int & dr){
   int size = max(d1,d2); 
   double *sum = new double[size]; 
  
   // Initialize the porduct polynomial 
   for (int i = 0; i<d1; i++) 
     sum[i] = p1[i]; 
  
   // Take ever term of first polynomial 
   for (int i=0; i<d2; i++) 
       sum[i] += p2[i]; 
  
   return sum;
}

//product of two polynomials (returns one polynomial)
double * poli_prod(double * p1, int d1, double * p2, int d2, int & dr){
   int size = max(d1,d2); 
   double *sum = new double[size]; 
  
   // Initialize the porduct polynomial 
   for (int i = 0; i<d1; i++) 
     sum[i] = p1[i]; 
  
   // Take ever term of first polynomial 
   for (int i=0; i<d2; i++) 
       sum[i] += p2[i]; 
  
   return sum;  
}

int main()
{
  double *p1;
  int g1;

  p1=read_poly(g1);
  print_poly(p1,g1);

  delete[] p1;
  return 0;
}
