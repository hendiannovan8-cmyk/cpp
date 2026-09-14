#include <iostream>
using namespace std;
int main() {
    int N;
    int jumlah_faktor=0;
    
    cin >> N;
    for (int i = 1; N >= i; i++){
        if (N % i ==0){
        jumlah_faktor++;
        }
        
    }
        if (jumlah_faktor==2){
            cout << "Prima" << endl;
        }
        else {
            cout << "Bukan Prima";
        }
    
    

    return 0;
}
