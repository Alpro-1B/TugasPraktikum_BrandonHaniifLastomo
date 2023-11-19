#include <iostream>
using namespace std;
    int batas; // variabel untuk menampung batas angka yang ingin dilihat oleh user
    int jumlahGanjil = 0; // variabel untuk menampung nilai jumlah bilangan ganjil
    int jumlahGenap = 0; // variabel untuk menampung nilai jumlah bilangan genap
    int jumlahPrima = 0; // variabel untuk menampung nilai jumlah bilangan prima

// parameter fungsi diisi sesuai jenis bilangan yang ingin ditampilkan
void printBilangan(string);
void printFaktorJumlah(string);

int main(){
    cout << "Selamat Datang di Program Penampil Bilangan\n";
    cout << "*Bilangan yang akan ditampilkan adalah bilangan ganjil, genap, dan prima dari angka 1 hingga angka sesuai keinginan Anda.\n";
    cout << "*Deret bilangan tersebut akan dijumlahkan dan akan ditampilkan hasil penjumlahan dan masing-masing faktornya.\n\n";
    
    cout << "Silakan masukkan batas angka untuk deret bilangan.\n";
    cout << "Saya ingin melihat deret bilangan hingga angka: ";
    // meminta input batas angka kepada user
    cin >> batas;

    cout << endl;

    // bagian bilangan ganjil
    cout << "A. Bilangan Ganjil\n";

    cout << "Bilangan ganjil dari angka 1 hingga " << batas << " adalah: ";
    // memanggil fungsi penampil bilangan dengan parameter ganjil
    printBilangan("ganjil");

    cout << "\nJumlah bilangan ganjil dari angka 1 hingga " << batas << " adalah: " << jumlahGanjil;

    cout << "\nFaktor-faktor dari jumlah bilangan ganjil tersebut adalah: ";
    // memanggil fungsi penampil faktor dengan parameter ganjil
    printFaktorJumlah("ganjil");
    // akhir dari bagian bilangan ganjil


    cout << endl << endl;


    // bagian bilangan genap
    cout << "B. Bilangan Genap\n";
    
    cout << "Bilangan genap dari angka 1 hingga " << batas << " adalah: ";
    // memanggil fungsi penampil bilangan dengan parameter genap
    printBilangan("genap");

    // menampilkan jumlah deret bilangan genap hingga batas angka
    cout << "\nJumlah bilangan genap dari angka 1 hingga " << batas << " adalah: " << jumlahGenap;

    cout << "\nFaktor-faktor dari jumlah bilangan genap tersebut adalah: ";
    // memanggil fungsi penampil faktor dengan parameter genap
    printFaktorJumlah("genap");
    // akhir dari bagian bilangan genap


    cout << endl << endl;


    // bagian bilangan prima
    cout << "C. Bilangan Prima\n";

    cout << "Bilangan prima dari angka 1 hingga " << batas << " adalah: ";
    // memanggil fungsi penampil bilangan dengan parameter prima
    printBilangan("prima");

    // menampilkan jumlah deret bilangan prima hingga batas angka
    cout << "\nJumlah bilangan prima dari angka 1 hingga " << batas << " adalah: " << jumlahPrima;

    cout << "\nFaktor-faktor dari jumlah bilangan prima tersebut adalah: ";
    // memanggil fungsi penampil faktor dengan parameter prima
    printFaktorJumlah("prima");
    // akhir dari bagian bilangan prima

    return 0;
}

void printBilangan(string jenisBilangan){
    for (int i = 1; i <= batas; i++){

        // bagian fungsi untuk menampilkan bilangan ganjil
        if (jenisBilangan == "ganjil"){
        // menyaring bilangan ganjil dari angka 1 hingga angka yang diinputkan user
            if (i % 2 != 0){
                cout << i << " ";
                // memasukkan bilangan-bilangan ganjil yang telah disaring ke variabel jumlah
                jumlahGanjil+=i;
            }
        }
        // akhir bagian fungsi penampil ganjil

        // bagian fungsi untuk menampilkan bilangan genap
        else if (jenisBilangan == "genap"){
        // menyaring bilangan ganjil dari angka 1 hingga angka yang diinputkan user
            if (i % 2 == 0){
                cout << i << " ";
                // memasukkan bilangan-bilangan ganjil yang telah disaring ke variabel jumlah
                jumlahGenap+=i;
            }
        } 
        // akhir bagian fungsi penampil genap
        
        // bagian fungsi untuk menampilkan bilangan prima
        else {
            // loop untuk bilangan yang akan dibagi
            for (int j = 2; j <= batas; j++){
                // jika faktor suatu angka bukan dirinya sendiri, maka skip angka tersebut
                if (i % j == 0 && i != j){
                    break;
                    // jika suatu angka bernilai lebih dari 1 dan faktornya adalah diri sendiri, maka tampilkan
                } else if (i > 1 && i % j == 0 && i == j){
                    cout << i << " ";
                    // memasukkan bilangan-bilangan prima yang telah disaring ke variabel jumlah
                    jumlahPrima+=i;
                }
            }
        }
        // akhir bagian fungsi penampil prima

    }
}



void printFaktorJumlah(string jenisBilangan){

    // bagian fungsi untuk menampilkan faktor dari jumlah bilangan ganjil
    if (jenisBilangan == "ganjil"){
        for (int i = 1; i <= jumlahGanjil; i++){
        // jika nilai i habis dibagi, maka nilai tersebut adalah faktornya
            if (jumlahGanjil % i == 0){
                cout << i << " ";
            }
        }
    }
    // akhir bagian fungsi penampil faktor jumlah ganjil

    // bagian fungsi untuk menampilkan faktor dari jumlah bilangan genap
    else if (jenisBilangan == "genap"){
        for (int i = 1; i <= jumlahGenap; i++){
        // jika nilai i habis dibagi, maka nilai tersebut adalah faktornya
            if (jumlahGenap % i == 0){
                cout << i << " ";
            }   
        } 
    }
    // akhir bagian fungsi penampil faktor jumlah ganjil

    // bagian fungsi untuk menampilkan faktor dari jumlah bilangan prima
    else{
        for (int i = 1; i <= jumlahPrima; i++){
        // jika nilai i habis dibagi, maka nilai tersebut adalah faktornya
            if (jumlahPrima % i == 0){
                cout << i << " ";
            }
        }   
    }
    // akhir bagian fungsi penampil faktor jumlah prima

}