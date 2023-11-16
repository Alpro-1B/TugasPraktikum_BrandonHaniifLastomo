#include <iostream>
using namespace std;

// fungsi untuk menampilkan deret fibonacci
void printFibonacci(int);

int main() {

    cout << "Selamat Datang di Program Penampil Deret Fibonacci\n\n";

    int n; // variabel penampung suku ke-n
    cout << "Silakan masukkan nilai n untuk suku terakhir yang ingin Anda lihat.\n";
    cout << "Saya ingin melihat deret Fibonacci hingga suku ke-";
    // meminta input suku ke-n kepada user
    cin >> n;
    cout << endl;
    
    cout << "Deret Fibonacci hingga suku ke-" << n << " adalah: ";
    
    // memanggil fungsi dengan parameter suku ke-n hasil input user
    printFibonacci(n);

    cout << "\n\nTerima Kasih!";

    return 0;
}

// isi fungsi menampilkan deret fibonacci
void printFibonacci(int batasSuku){
    int un = 1; // variabel suku ke-n
    int unPlus1 = 1; // variabel suku ke-(n+1)
    int unPlus2; // variabel suku ke-(n+2)

    // looping digunakan untuk membuat deret dan menampilkan suku-sukunya
    for (int i = 1; i <= batasSuku; i++){
        // menampilkan angka 
        cout << un << " ";
        // memasukkan jumlah suku ke-n dan suku ke-(n+1) ke dalam suku ke-(n+2)
        unPlus2 = unPlus1+un;
        // menggeser nilai suku ke-(n+1) ke kiri (suku ke-n) agar deret dapat bergerak ke suku-suku selanjutnya
        un=unPlus1;
        // menggeser nilai suku ke-(n+2) ke kiri (suku ke-n+1) agar deret dapat bergerak ke suku-suku selanjutnya
        unPlus1=unPlus2;
    }
}