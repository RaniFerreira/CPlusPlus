/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    double mat[12][12];
    int L;
    char T;
    double S,M,resultado =0.0,soma = 0.0;
    
    cin >> L;
    cin >> T;
    
    for(int i =0;i<12;i++){
      for(int j =0;j<12;j++){
          cin >> mat[i][j];
      }  
    }
    for(int i =0;i<12;i++){
      for(int j =0;j<12;j++){
    
        if(i == L){
           soma = soma + mat[i][j];
           
           if(T == 'S'){
                resultado = soma;
           }
           else if(T == 'M'){
               resultado = soma / 12;
           }
        }
 
      }  
    }
    
    cout <<  fixed << setprecision(1) << resultado << endl;

    return 0;
}