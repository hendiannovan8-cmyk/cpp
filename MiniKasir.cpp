#include <iostream>
using namespace std;
int main() {
    string nama;
    int jumlah_barang;
    int harga_satuan;
    int total;
    int diskon;
    int pembayaran;
    cin>> nama;
    cin>>jumlah_barang;
    cin >> harga_satuan;
    total=jumlah_barang*harga_satuan;
   
 cout<<nama<<endl<<total<<endl;    
    
    
   
    
    if (total>=500000){
      diskon=  total* 20/100 ;
      cout<<diskon<<endl;
    }
    else if(total>=250000){
        diskon= total *10/100;
        cout <<diskon<<endl;
    }
    else {
        cout << total<<endl;
    }
    
  pembayaran=total-diskon;
  cout <<pembayaran;
   
    return 0;
}