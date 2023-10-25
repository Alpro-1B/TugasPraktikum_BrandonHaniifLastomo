#include <iostream>
using namespace std;

int main(){
    cout << "Selamat Datang di Program Pencari Angka Terbesar\n"; 
    cout << "*Jika ingin menggunakan bilangan desimal, gunakan tanda titik (.) sebagai tanda koma (,)\n\n\n"; 

    // deklarasi variabel
    // float digunakan untuk memberikan kebebasan bagi user untuk memasukkan nilai desimal
    float a, b, c;
    cout << "Masukkan angka pertama: ";
    // meminta input angka pertama kepada user
    cin >> a;
    cout << "Masukkan angka kedua: ";
    // meminta input angka kedua kepada user
    cin >> b;
    cout << "Masukkan angka ketiga: ";
    // meminta input angka ketiga kepada user
    cin >> c;

    // proses pencarian
    // operator logika && digunakan karena salah satu angka harus lebih besar dari kedua angka sisanya, bukan hanya salah satu
    // jika angka pertama lebih besar dari dua angka sisanya
    if (a > b && a > c){
        // tampilkan angka terbesar (angka pertama)
        cout << "\n\nAngka terbesar dari " << a << ", " << b << ", dan " << c << " adalah: " << a;
    // jika angka kedua lebih besar dari dua angka sisanya
    } else if(b > a && b > c){
        // tampilkan angka terbesar (angka kedua)
        cout << "\n\nAngka terbesar dari " << a << ", " << b << ", dan " << c << " adalah: " << b;
    // jika angka ketiga lebih besar dari dua angka sisanya
    } else if(c > a && c > b){
        // tampilkan angka terbesar (angka ketiga)
        cout << "\n\nAngka terbesar dari " << a << ", " << b << ", dan " << c << " adalah: " << c;
    // jika ketiga angka sama besar
    } else {
        // tampilkan pesan berikut
        cout << "\n\nAngka-angka yang Anda masukkan bernilai sama, sehingga tidak ada angka terbesar dari ketiga angka tersebut.";
    }

    return 0;
}
