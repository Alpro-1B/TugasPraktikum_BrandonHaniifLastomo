#include <iostream>
using namespace std;

int main() {

    // deklarasi variabel untuk jumlah bebek (nBebek) dan jumlah teman (nTeman)
    int nBebek, nTeman;
    cout << "masukkan jumlah bebek: ";
    // meminta input user untuk jumlah bebek
    cin >> nBebek;
    cout << "masukkan jumlah teman: ";
    // meminta input user untuk jumlah teman
    cin >> nTeman;
    
    // menampilkan banyak bebek yang didapatkan teman Pak Tatang dengan membagi jumlah bebek dengan jumlah teman
    cout << "teman Pak Tatang mendapat: " << nBebek/nTeman << " ekor bebek perorang\n";
    // menampilkan sisa bebek Pak Tatang dengan menggunakan modulus (sisa bagi = sisa bebek)
    cout << "sisa bebek Pak Tatang adalah: " << nBebek%nTeman << " ekor bebek";

    cin.get();
    return 0;
}