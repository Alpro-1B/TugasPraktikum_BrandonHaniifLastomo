#include <iostream>
using namespace std;

int main(){

    cout << "Selamat Datang di Program Penampil Deret Fibonacci\n\n";

    int n; // deklarasi variabel
    int un = 1; // deklarasi dan inisialisasi variabel
    int unPlus1 = 1; // deklarasi dan inisialisasi variabel
    int unPlus2; // deklarasi variabel
    cout << "Silakan masukkan nilai n untuk suku terakhir yang ingin Anda lihat.\n";
    cout << "Saya ingin melihat deret Fibonacci hingga suku ke-";
    // meminta input suku ke-n kepada user
    cin >> n;
    cout << endl;
    
    cout << "Deret Fibonacci hinnga suku ke-" << n << " adalah: ";
    
    // looping digunakan untuk membuat deret dan menampilkan suku-sukunya
    for (int i = 1; i <= n; i++){
        // menampilkan angka 
        cout << un << " ";
        // memasukkan jumlah suku ke-n dan suku ke-(n+1) ke dalam suku ke-(n+2) sebagai konsep fibonacci
        unPlus2 = unPlus1+un;
        // menggeser nilai suku ke-(n+1) ke kiri (suku ke-n) agar deret dapat bergerak ke suku-suku selanjutnya
        un=unPlus1;
        // menggeser nilai suku ke-(n+2) ke kiri (suku ke-n+1) agar deret dapat bergerak ke suku-suku selanjutnya
        unPlus1=unPlus2;
    }

    cout << "\n\nTerima Kasih!";

    return 0;
}
