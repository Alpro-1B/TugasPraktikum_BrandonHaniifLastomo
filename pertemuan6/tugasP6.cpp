#include <iostream>
using namespace std;

int main(){
    cout << "Selamat Datang di Program Pencari Nilai Tertinggi\n\n";

    int sizeArr; // variabel wadah ukuran array

    // handle input user <= 0
    do{
        cout << "Berapa banyak nilai yang akan Anda periksa?\n> ";
        // input user untuk ukuran array
        cin >> sizeArr;
        if (sizeArr <= 0){
            cout << "Banyak nilai harus lebih dari 0. Silakan coba lagi.\n\n";
        }
    } while (sizeArr <= 0);
    // akhir dari handle
    
    int nilai[sizeArr]; // deklarasi array dengan ukuran array berdasarkan input user
    
    cout << endl;

    // loop untuk input value array
    for (int a = 0; a < sizeArr; a++){
        cout << "Masukkan nilai ke-" << a+1 << ": ";
        // input value ke array nilai
        cin >> nilai[a];
    }
    // akhir dari loop input value array
    
    
    if (sizeArr == 1){
        // kalimat jika hanya ada satu data
        cout << "\nKarena hanya ada satu nilai, maka nilai tertingginya adalah: ";
    } else {
        // jika lebih dari satu data
        cout << "\nNilai tertinggi dari nilai-nilai yang Anda masukkan adalah: ";
    }
    
    
    // loop untuk mencari nilai tertinggi
    for (int b = 0; b < sizeArr; b++){
        // jika indeks+1 sama dengan ukuran array, keluarkan nilai array terakhir
        if (b+1 == sizeArr){
            cout << nilai[b];
        } else {
            // membandingkan nilai untuk mencari yang tertinggi
            if (nilai[b] > nilai[b+1]){
                // mencari yang tertinggi
                // nilai array yang lebih tinggi dimasukkan ke array ke-indeks selanjutnya untuk pemeriksaan selanjutnya
                nilai[b+1] = nilai[b];
                // nilai array yang lebih rendah dimasukkan ke array ke-indeks b agar nilai tertinggi berada di indeks terakhir
                nilai[b] = nilai[b+1];
            }
        }
    }
    // akhir dari loop untuk mencari nilai tertinggi
    
    return 0;
}