#include <iostream>
using namespace std;

int main(){

    cout << "Selamat Datang di Program Penampil Bilangan\n";
    cout << "*Bilangan yang akan ditampilkan adalah bilangan ganjil, genap, dan prima dari angka 1 hingga angka sesuai keinginan Anda.\n";
    cout << "*Deret bilangan tersebut akan dijumlahkan dan akan ditampilkan hasil penjumlahan dan masing-masing faktornya.\n\n";
    
    int batas; // deklarasi variabel
    int jumlahGanjil = 0; // deklarasi dan inisialisasi variabel
    int jumlahGenap = 0; // deklarasi dan inisialisasi variabel
    int jumlahPrima = 0; // deklarasi dan inisialisasi variabel
    cout << "Silakan masukkan batas angka untuk deret bilangan.\n";
    cout << "Saya ingin melihat deret bilangan hingga angka: ";
    // meminta input batas angka kepada user
    cin >> batas;

    cout << endl;

    // bagian bilangan ganjil
    cout << "A. Bilangan Ganjil\n";
    // loop seluruh bilangan bulat dari angka 1 hingga angka yang diinputkan user agar dapat disaring, sehingga tersisa bilangan ganjil
    for (int i = 1; i <= batas; i++){
        // menampilkan kalimat awal untuk deret bilangan
        if (i == 1){
            cout << "Bilangan ganjil dari angka 1 hingga " << batas << " adalah: ";
        }
        // menyaring bilangan ganjil dari angka 1 hingga angka yang diinputkan user (jika dibagi dua masih ada sisa bagi)
        if (i % 2 != 0){
            // menampilkan bilangan ganjil
            cout << i << " ";
            // memasukkan bilangan-bilangan ganjil yang telah disaring ke variabel jumlah agar bisa ditampilkan dan dicari faktornya
            jumlahGanjil+=i;
        }
    }

    // menampilkan jumlah deret bilangan ganjil hingga batas angka
    cout << "\nJumlah bilangan ganjil dari angka 1 hingga " << batas << " adalah: " << jumlahGanjil;

    cout << "\nFaktor-faktor dari jumlah bilangan ganjil tersebut adalah: ";
    // loop dari angka 1 hingga nilai jumlah bilangan ganjil untuk mencari faktornya
    for (int a = 1; a <= jumlahGanjil; a++){
        /* jika nilai jumlah bilangan ganjil dibagi suatu angka dari 1 hingga nilai jumlah itu sendiri tidak memiliki sisa bagi,
        maka angka yang menjadi pembagi merupakan faktornya*/
        if (jumlahGanjil % a == 0){
            // menampilkan faktor-faktornya
            cout << a << " ";
        }
        
    }
    // akhir dari bagian bilangan ganjil
    
    cout << endl << endl;

    // bagian bilangan genap
    cout << "B. Bilangan Genap\n";
    // loop seluruh bilangan bulat dari angka 1 hingga angka yang diinputkan user agar dapat disaring, sehingga tersisa bilangan genap
    for (int j = 1; j <= batas; j++){
        // menampilkan kalimat awal untuk deret bilangan
        if (j == 1){
            cout << "Bilangan genap dari 1 hingga " << batas << " adalah: ";
        }
        // menyaring bilangan genap dari angka 1 hingga angka yang diinputkan user (jika dibagi dua masih tidak ada sisa bagi)
        if (j % 2 == 0){
            // menampilkan bilangan genap
            cout << j << " ";
            // memasukkan bilangan-bilangan genap yang telah disaring ke variabel jumlah agar bisa ditampilkan dan dicari faktornya
            jumlahGenap+=j;
        }
    }

    // menampilkan jumlah deret bilangan genap hingga batas angka
    cout << "\nJumlah bilangan genap dari angka 1 hingga " << batas << " adalah: " << jumlahGenap;

    cout << "\nFaktor-faktor dari jumlah genap tersebut adalah: ";
    // loop dari angka 1 hingga nilai jumlah bilangan genap untuk mencari faktornya
    for (int b = 1; b <= jumlahGenap; b++){
        /* jika nilai jumlah bilangan genap dibagi suatu angka dari 1 hingga nilai jumlah itu sendiri tidak memiliki sisa bagi,
        maka angka yang menjadi pembagi merupakan faktornya*/
        if (jumlahGenap % b == 0){
            // menampilkan faktor-faktornya
            cout << b << " ";
        }
        
    }
    // akhir dari bagian bilangan genap

    cout << endl << endl;

    // bagian bilangan prima
    cout << "C. Bilangan Prima\n";
    /* outer loop, looping seluruh bilangan bulat dari angka 1 hingga angka yang diinputkan user agar dapat disaring, 
    sehingga tersisa bilangan prima*/
    for (int k = 1; k <= batas; k++){
        // menampilkan kalimat awal untuk deret bilangan
        if (k == 1){
            cout << "Bilangan prima dari 1 hingga " << batas << " adalah: ";
        }
        /* inner loop, loop dari angka 2 (karena 1 adalah faktor semua bilangan) hingga angka yang diinputkan user,
        angka yang diloop akan menjadi pembagi untuk mencari faktor*/
        for (int l = 2; l <= batas; l++){
            // jika faktor suatu angka bukan dirinya sendiri, maka skip angka tersebut
            if (k % l == 0 && k != l){
                break;
                // jika suatu angka bernilai lebih dari 1 dan faktornya adalah diri sendiri, maka tampilkan
            } else if (k > 1 && k % l == 0 && k == l){
                // menampilkan bilangan prima
                cout << k << " ";
                // memasukkan bilangan-bilangan prima yang telah disaring ke variabel jumlah agar bisa ditampilkan dan dicari faktornya
                jumlahPrima+=k;
            }
        }
        
    }

    // menampilkan jumlah deret bilangan prima hingga batas angka
    cout << "\nJumlah bilangan prima dari angka 1 hingga " << batas << " adalah: " << jumlahPrima;

    cout << "\nFaktor-faktor dari jumlah prima tersebut adalah: ";
    // loop dari angka 1 hingga nilai jumlah bilangan prima untuk mencari faktornya
    for (int c = 1; c <= jumlahPrima; c++){
        /* jika nilai jumlah bilangan prima dibagi suatu angka dari 1 hingga nilai jumlah itu sendiri tidak memiliki sisa bagi,
        maka angka yang menjadi pembagi merupakan faktornya*/
        if (jumlahPrima % c == 0){
            // menampilkan faktor-faktornya
            cout << c << " ";
        }
        
    }
    // akhir dari bagian bilangan prima

    return 0;
}