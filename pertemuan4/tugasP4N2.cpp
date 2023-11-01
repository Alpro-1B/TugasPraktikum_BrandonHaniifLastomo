#include <iostream>
using namespace std;

int main(){

    cout << "Selamat Datang di Program Penggambar Segitiga Sama Sisi\n\n";

    // deklarasi variabel
    int n;
    
    cout << "Silakan masukkan nilai tinggi segitiga: ";
    // meminta input tinggi segitiga kepada user
    cin >> n;
    cout << "Segitiga dengan tinggi " << n << " akan berbentuk seperti ini: \n\n";

    // outer loop, pada kasus ini berfungsi sebagai tinggi segitiga
    for (int i = 1; i <= n; i++){
        /* inner loop1, pada kasus ini, karena segitiga tidak menempel ke samping kiri, berarti harus diberi spasi terlebih dahulu
        innerloop1 inilah yang melakukan hal tersebut*/
        for (int j = n; j > i; j--){
            cout << " "; 
        }
        /*inner loop2, pada kasus ini, berfungsi untuk menampilkan bentuk pada segitiga menggunakan tanda bintang (*)*/ 
        for (int k = 1; k <= i; k++){
            cout << "* "; 
        }
    // membuat baris baru tiap loop agar tinggi segitiga vertikal
    cout << endl;
    }

    cout << "\nTerima Kasih!";
    
    return 0;
}
