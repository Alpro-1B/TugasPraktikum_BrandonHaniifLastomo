#include <iostream>
using namespace std;

int main(){
    cout << "Selamat Datang di Program Pencari Nilai Tertinggi\n\n";

    int sizeArr; // variabel wadah ukuran array
    cout << "berapa banyak nilai yang akan Anda periksa?\n> ";
    // input user untuk ukuran array
    cin >> sizeArr;
    // deklarasi array dengan ukuran array berdasarkan input user
    int nilai[sizeArr];
    
    cout << endl;

    // loop untuk input value array
    for (int a = 0; a < sizeArr; a++){
        cout << "masukkan nilai ke-" << a+1 << ": ";
        // input value ke array nilai
        cin >> nilai[a];
    }
    
    
    cout << "\nnilai tertinggi dari nilai-nilai yang Anda masukkan adalah: ";
    
    for (int b = 0; b < sizeArr; b++){
        // jika indeks+1 sama dengan ukuran array, keluarkan nilai array terakhir
        if (b+1 == sizeArr){
            cout << nilai[b];
        } else {
            // membandingkan nilai untuk mencari yang terbesar
            if (nilai[b] > nilai[b+1]){
                // mengurutkan nilai
                // nilai array yang lebih tinggi dimasukkan ke array ke-indeks selanjutnya untuk pemeriksaan selanjutnya
                nilai[b+1] = nilai[b];
                // nilai array yang lebih rendah dimasukkan ke array ke-indeks b agar nilai tertinggi berada di indeks terakhir
                nilai[b] = nilai[b+1];
            }
        }
    }
    
    return 0;
}