#include <iostream>
using namespace std;

int main(){

    cout << "Selamat Datang di Program Menghitung Luas Bangun Datar\n";
    cout << "*Satuan yang digunakan dalam program ini adalah sentimeter (cm).\n"; 
    cout << "*Jika ingin menggunakan angka desimal, gunakan tanda titik (.) sebagai tanda koma (,)\n"; 
    cout << "*Harap masukkan nilai tanpa menyertakan satuan.\n\n\n"; 

    // deklarasi variabel
    int opsi;
    // float digunakan karena nilai luas dan sisi-sisi bisa bernilai desimal
    float luas, sisi, panjang, lebar, alas, tinggi;
    cout << "Pilih bangun datar yang akan dihitung: \n";
    cout << "1. Persegi\n";
    cout << "2. Persegi panjang\n";
    cout << "3. Segitiga\n> ";
    // meminta input pilihan kepada user
    cin >> opsi;

    // proses pengkondisian berdasarkan pilihan user
    switch (opsi){
    // jika pilihan user 1, maka bangun datarnya adalah persegi
    case 1:
        cout << "\nAnda memilih persegi.\n";
        cout << "Silakan masukkan nilai sisi: ";
        // meminta input nilai sisi kepada user
        cin >> sisi;
        // memasukkan nilai luas ke variabel 'luas' setelah nilai sisi dioperasikan sesuai rumus luas bangun datar yang dipilih
        luas = sisi*sisi;
        // menampilkan hasil perhitungan luas
        cout << "\nLuas persegi adalah: " << luas << "cm²\n\n";
        cout << "Terima kasih!";
        break;
    case 2:
    // jika pilihan user 2, maka bangun datarnya adalah persegi panjang
        cout << "\nAnda memilih persegi panjang.\n";
        cout << "Silakan masukkan nilai panjang: ";
        // meminta input nilai panjang kepada user
        cin >> panjang;
        cout << "Silakan masukkan nilai lebar: ";
        // meminta input nilai lebar kepada user
        cin >> lebar;
        // memasukkan nilai luas ke variabel 'luas' setelah nilai panjang dan lebar dioperasikan sesuai rumus luas bangun datar yang dipilih
        luas = panjang*lebar;
        // menampilkan hasil perhitungan luas
        cout << "\nLuas persegi panjang adalah: " << luas << "cm²\n\n";
        cout << "Terima kasih!";
        break;
    case 3:
    // jika pilihan user 3, maka bangun datarnya adalah segitiga
        cout << "\nAnda memilih segitiga.\n";
        cout << "Silakan masukkan nilai alas: ";
        // meminta input nilai alas kepada user
        cin >> alas;
        cout << "Silakan masukkan nilai tinggi: ";
        // meminta input nilai tinggi kepada user
        cin >> tinggi;
        // memasukkan nilai luas ke variabel 'luas' setelah nilai alas dan tinggi dioperasikan sesuai rumus luas bangun datar yang dipilih
        luas = (alas*tinggi)/2;
        // menampilkan hasil perhitungan luas
        cout << "\nLuas segitiga adalah: " << luas << "cm²\n\n";
        cout << "Terima kasih!";
        break;
    
    default:
    // jika pilihan user selain 1-3, tampilkan pesan berikut
        cout << "\nPilihan anda invalid.";
        break;
    }

    return 0;
}
