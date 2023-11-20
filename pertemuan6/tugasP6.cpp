#include <iostream>
using namespace std;

int main(){
    cout << "Selamat Datang di Program Pencari Nilai Tertinggi\n\n";
    
    int sizeArr;
    cout << "berapa banyak nilai yang akan Anda periksa?\n> ";
    cin >> sizeArr;
    int nilai[sizeArr];
    
    cout << endl;

    for (int a = 0; a < sizeArr; a++){
        cout << "masukkan nilai ke-" << a+1 << ": ";
        cin >> nilai[a];
    }
    
    
    cout << "\nnilai tertinggi dari nilai-nilai yang Anda masukkan adalah: ";
    for (int b = 0; b < sizeArr; b++){
        if (b+1 == sizeArr){
            cout << nilai[b];
        } else {
            if (nilai[b] > nilai[b+1]){
                nilai[b+1] = nilai[b];
                nilai[b] = nilai[b+1];
            }
        }
    }
    
    return 0;
}