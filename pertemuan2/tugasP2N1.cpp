#include <iostream>
using namespace std;

int main(){

    // Tugas No 1
    
    // inisialisasi dua variabel awal
    int firstValue = 10;
    int secondValue = 8;
    
    // Cara 1
    cout << "Cara pertama\n";
    // membuat variabel baru sebagai wadah nilai yang akan ditukar
    int thirdValue = firstValue;
    
    // pengecekan nilai awal kedua variabel dengan cout
    cout << "nilai firstValue awal: " << firstValue << endl;
    cout << "nilai secondValue awal: " << secondValue << endl << endl;

    /* karena nilai firstValue sudah ada di thirdValue, firstValue bisa dianggap kosong, sehingga 
    nilai dari secondValue bisa dimasukkan ke firstValue (pertukaran tahap 1)*/
    firstValue = secondValue;
    /* karena nilai secondValue sudah ada di firstValue, secondValue bisa dianggap kosong, sehingga 
    nilai dari firstValue yang ada di thirdValue bisa dimasukkan ke secondValue (pertukaran tahap 2)*/
    secondValue = thirdValue;
    
    // pengecekan nilai akhir kedua variabel dengan cout
    cout << "nilai firstValue akhir: " << firstValue << endl;
    cout << "nilai secondValue akhir: " << secondValue;
    // endof cara 1



    // cara 2
    cout << "\n\nCara kedua\n";
    // reset nilai
    firstValue = 10;
    secondValue = 8;

    // pengecekan nilai awal kedua variabel dengan cout
    cout << "nilai firstValue awal: " << firstValue << endl;
    cout << "nilai secondValue awal: " << secondValue << endl << endl;

    /* untuk menukar nilai dari kedua variabel, masukkan
    jumlah dari keduanya ke salah satu variabel agar nantinya bisa dikurang sehingga mendapat nilai salah satunya*/
    firstValue = firstValue + secondValue;
    /* untuk mendapat nilai firstValue dan memasukkannya ke secondValue, kurangi
    nilai firstValue yang baru (jumlah nilai kedua variabel) dengan nilai secondValue awal (8), sehingga 
    tersisa nilai firstValue yang lama saja*/
    secondValue = firstValue - secondValue;
    /* karena secondValue sekarang berisi nilai awal firstValue, kurangi
    nilai firstValue yang baru (jumlah nilai kedua variabel) dengan nilai secondValue baru (10), sehingga
    tersisa nilai secondValue yang lama*/
    firstValue = firstValue - secondValue;

    // pengecekan nilai akhir kedua variabel dengan cout
    cout << "nilai firstValue akhir: " << firstValue << endl;
    cout << "nilai secondValue akhir: " << secondValue;
    // endof cara 2

    cin.get();
    return 0;
}