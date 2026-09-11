#include <iostream>
using namespace std;

int main() {
    char operasi;
    float angka1 ;
    float angka2;
    
    cin >> operasi;
    cin >> angka1;
    cin >> angka2;

    
    switch (operasi){
        case '+' :
        cout << angka1+angka2 << endl;
        break;

        
        case '-':
        cout << angka1 - angka2 << endl;
        break;
        
        case '/':
        if (angka2 == 0){
        cout << "EROR!! : Operasi ini tidak valid" <<endl; 
    }   else {
        cout << angka1 / angka2 << endl;
    }
        break;
        
        case '*':
        cout << angka1 * angka2 << endl;
        break;
        
        default:
        cout << "Operator tidak valid" << endl;
        
        
    }

    return 0;
}