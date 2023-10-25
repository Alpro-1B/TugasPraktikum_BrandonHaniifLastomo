#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Selamat Datang di Program Pencari Predikat Nilai\n";
    cout << "*Jika skor Anda adalah angka desimal, gunakan tanda titik (.) sebagai tanda koma (,)\n\n\n"; 

    // deklarasi variabel
    float skor;
    // string digunakan pada npm meski npm adalah angka karena angka tersebut tidak akan dioperasikan
    string nama, npm;
    cout << "Masukkan Nama: ";
    // meminta input nama kepada user
    // getline digunakan untuk menangani bug ketika ada spasi di dalam input
    getline(cin, nama);
    cout << "Masukkan NPM: ";
    // meminta input npm kepada user
    cin >> npm;
    cout << "Masukkan Skor anda: ";
    // meminta input skor kepada user
    cin >> skor;

    // klasifikasi skor
    // jika skor bernilai lebih dari 100
    if (skor > 100){
        // tampikan pesan berikut.
        cout << "\nSkor yang Anda masukkan terlalu tinggi. Harap masukkan ulang skor Anda."; 
    // jika skor bernilai 90 dan kurang dari atau sama dengan 100
    } else if (skor >= 90){
        // tampilkan nilai A
        cout << "\nSelamat! Anda mendapatkan nilai A.";
    // jika skor bernilai 80 atau lebih
    } else if (skor >= 80){
        // tampilkan nilai B
        cout << "\nAnda mendapatkan nilai B.";
    // jika skor bernilai 70 atau lebih
    } else if (skor >= 70){
        // tampilkan nilai C
        cout << "\nAnda mendapatkan nilai C.";
    // jika skor bernilai 60 atau lebih
    } else if (skor >= 60){
        // tampilkan nilai D
        cout << "\nAnda mendapatkan nilai D.";
    // jika skor bernilai lebih dari 0 dan kurang dari 60
    } else if (skor > 0){
        // tampilkan nilai E
        cout << "\nAnda mendapatkan nilai E.";
    // jika skor berupa bilangan negatif atau lainnya
    } else {
        // tampikan pesan berikut.
        // pesan nilai E tetap ada karena jika user menginput huruf untuk skor, skor otomatis diisi dengan angka 0.
        cout << "\nAnda mendapatkan nilai E atau skor yang Anda masukkan invalid.";
    }

    return 0;
}
