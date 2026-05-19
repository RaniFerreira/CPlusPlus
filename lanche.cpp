#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int quant;
    double preco;
    int prod;
    
    cin >> prod;
    cin >> quant;
    
    if(prod == 1){
        
        preco = quant * 4.00;
    }
    else if(prod == 2){
        preco = quant * 4.50;
    }
    else if(prod == 3){
        preco = quant * 5.00;
    }
    else if(prod == 4){
        preco = quant * 2.00;
    }
    else{
        preco = quant * 1.50;
        
    }
    
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << preco << endl; 
    
    
    
    return 0;
}