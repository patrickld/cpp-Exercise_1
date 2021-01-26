#include <iostream>
#include <cmath>
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


// Calculation of the polynomial value for a certain position x (returns a real number)
int poli_value(double * p, int d, int dx){
  double t = 0;
  for(int i = 0; i <= d; i++){
    t += p[i]*pow(dx,i);
  }
  cout << "The value of the Polynomial is: " << t << endl;
  return t; 
}


// Return maximum of two integers
int max(int m, int n){
  return (m > n)? m: n;
} 


// Sum of two polynomials (returns a polynomial)
double * poli_sum(double * p1, int d1, double * p2, int d2, int & dr){
  double *sum_poli = new double[dr];

  // Initialize the product polynomial 
  for (int i = 0; i<d1; i++) 
    sum_poli[i] = p1[i]; 
  
  // Take every term of first polynomial 
  for (int i=0; i<d2; i++) 
      sum_poli[i] += p2[i]; 
  
  print_poly(sum_poli, dr);
  return sum_poli;
}


//product of two polynomials (returns one polynomial)
double * poli_prod(double * p1, int d1, double * p2, int d2, int & dr){
  double * prod_poli = new double[dr];
/*
//If dr is not given: 
  int size = max(d1,d2); 
  double *sum = new double[size]; 
*/  

  for(int i = 0; i <= d1; i++){
    for(int j = 0; j <= d2; j++){
      prod_poli[i+j] += p1[i]*p2[j]; 
    }
  }
  print_poly(prod_poli, dr);
  return prod_poli;
}


int main()
{
  double *p1;
  double *p2;
  int g1;
  int g2;

  p1 = read_poly(g1);
  p2 = read_poly(g2);
  print_poly(p1,g1);
  print_poly(p2, g2);

  int x = 3;
  int result = poli_value(p1, g1, x);

  double *sum;
  double *product;
  
  int d_sum = max(g1, g2);
  int d_prod = g1+g2;

  //calculate the sum of two polynomials
  sum = poli_sum(p1, g1, p2, g2, d_sum);
  //calculate the product of two polynomials
  product = poli_prod(p1, g1, p2, g2, d_prod);

  delete[] p1;
  delete[] p2;
  delete[] sum;
  delete[] product;
  return 0;
}