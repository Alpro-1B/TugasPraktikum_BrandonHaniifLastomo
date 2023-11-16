#include <iostream>
using namespace std;

// fungsi untuk menampilkan segitiga
void printSegitiga(int tinggi);

int main(){

    cout << "Selamat Datang di Program Penggambar Segitiga Sama Sisi\n\n";

    // variabel untuk menampung nilai tinggi segitiga
    int n;
    
    cout << "Silakan masukkan nilai tinggi segitiga: ";
    // meminta input tinggi segitiga kepada user
    cin >> n;
    cout << "Segitiga dengan tinggi " << n << " akan berbentuk seperti ini: \n\n";

    // memanggil fungsi dengan parameter tinggi segitiga hasil input user
    printSegitiga(n);

    cout << "\nTerima Kasih!";
    
    return 0;
}

// isi fungsi menampilkan segitiga
void printSegitiga(int tinggi){
    
    // loop untuk tinggi segitiga
    for (int i = 1; i <= tinggi; i++){
        // loop untuk memberi spasi agar segitiga di tengah
        for (int j = tinggi; j > i; j--){
            cout << " "; 
        }
        // loop untuk menampilkan bentuk segitiga 
        for (int k = 1; k <= i; k++){
            cout << "* "; 
        }
    // baris baru agar segitiga vertikal
    cout << endl;
    }

}