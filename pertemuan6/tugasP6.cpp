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
    
    int nilai[sizeArr]; // deklarasi array penampung nilai inputan user dengan ukuran array berdasarkan input user
    int indeksNilai[sizeArr]; // deklarasi array untuk print indeks nilai tertinggi

    cout << endl;

    // loop untuk input value array
    for (int a = 0; a < sizeArr; a++){
        cout << "Masukkan nilai ke-" << a+1 << ": ";
        // input value ke array nilai
        cin >> nilai[a];
    }
    // akhir dari loop input value array
    

    // memasukkan value array nilai ke array indeksNilai agar indeks bisa diprint
    for (int i = 0; i < sizeArr; i++){
        indeksNilai[i] = nilai[i];
    }
    // akhir dari memasukkan value
    
    
    // loop untuk mencari nilai tertinggi
    for (int b = 0; b < sizeArr; b++){
        // jika indeks+1 sama dengan ukuran array, keluarkan nilai array terakhir
        if (b+1 == sizeArr){
            break;
        } else {
            // membandingkan nilai untuk mencari yang tertinggi
            if (nilai[b] > nilai[b+1]){
                // menukar value agar nilai tertinggi berada paling belakang
                nilai[b+1] = nilai[b+1] + nilai[b]; 
                nilai[b] = nilai[b+1] - nilai[b]; 
                nilai[b+1] = nilai[b+1] - nilai[b]; 
            }
        }
    }
    // akhir dari loop untuk mencari nilai tertinggi


    // print pesan kepada user
    for (int c = 0; c < sizeArr; c++){
        // jika semua nilai yang diinput bernilai sama (tidak ada nilai tertinggi)
        if (nilai[sizeArr-1] == nilai[c]){
            if (c+1 == sizeArr){
                cout << "Tidak ada nilai tertinggi dari nilai-nilai yang Anda masukkan.\n";
            }
        // jika nilai yang diinput berbeda (ada nilai tertinggi)
        } else {
            for (int d = 0; d < sizeArr; d++){
                // mencari indeks nilai tertinggi dengan membandingkan value
                if (nilai[sizeArr-1] == indeksNilai[d]){
                    cout << "Nilai tertinggi dari nilai-nilai yang Anda masukkan adalah: " << indeksNilai[d] << " yang berada di indeks ke-" << d << endl;
                    c = sizeArr;
                }
            }
            
        }
        
    }
    // akhir dari print pesan

    
    return 0;
}