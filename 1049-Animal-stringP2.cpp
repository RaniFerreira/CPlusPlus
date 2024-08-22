/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char p1[20], p2[20], p3[20];
    
    cin >> p1 >> p2 >> p3;
    
    /*A função strcmp() recebe paramentos e compara para ver
    se a entrada é verdadeira
    realiza uma comparação ordinal de string1 e string2 e 
    retorna um valor que indica a relação entre eles.
    */
    
    if(strcmp(p1, "vertebrado") == 0 && strcmp(p2, "ave") == 0 && strcmp(p3, "carnivoro") == 0){
        cout << "aguia" << endl;
    }
    else if(strcmp(p1, "vertebrado") == 0 && strcmp(p2, "ave") == 0 && strcmp(p3, "onivoro") == 0){
        cout << "pomba" << endl;
    }
    else if(strcmp(p1, "vertebrado") == 0 && strcmp(p2, "mamifero") == 0 && strcmp(p3, "onivoro") == 0){
        cout << "homem" << endl;
    }
    else if(strcmp(p1, "vertebrado") == 0 && strcmp(p2, "mamifero") == 0 && strcmp(p3, "herbivoro") == 0){
        cout << "vaca" << endl;
    }
    else if(strcmp(p1, "invertebrado") == 0 && strcmp(p2, "inseto") == 0 && strcmp(p3, "hematofago") == 0){
        cout << "pulga" << endl;
    }
    else if(strcmp(p1, "invertebrado") == 0 && strcmp(p2, "inseto") == 0 && strcmp(p3, "herbivoro") == 0){
        cout << "lagarta" << endl;
    }
    else if(strcmp(p1, "invertebrado") == 0 && strcmp(p2, "anelideo") == 0 && strcmp(p3, "hematofago") == 0){
        cout << "sanguessuga" << endl;
    }
    else if(strcmp(p1, "invertebrado") == 0 && strcmp(p2, "anelideo") == 0 && strcmp(p3, "onivoro") == 0){
        cout << "minhoca" << endl;
    }

    return 0;
}
