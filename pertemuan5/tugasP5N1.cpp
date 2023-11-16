#include <iostream>
using namespace std;
    int batas; // variabel untuk menampung batas angka yang ingin dilihat oleh user
    int jumlahGanjil = 0; // variabel untuk menampung nilai jumlah bilangan ganjil
    int jumlahGenap = 0; // variabel untuk menampung nilai jumlah bilangan genap
    int jumlahPrima = 0; // variabel untuk menampung nilai jumlah bilangan prima

void printGanjil();
void printFaktorGanjil();
void printGenap();
void printFaktorGenap();
void printPrima();
void printFaktorPrima();

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

    // memanggil fungsi penampil bilangan ganjil
    printGanjil();

    cout << "\nJumlah bilangan ganjil dari angka 1 hingga " << batas << " adalah: " << jumlahGanjil;

    // memanggil fungsi penampil faktor dari jumlah bilangan ganjil
    printFaktorGanjil();
    // akhir dari bagian bilangan ganjil


    cout << endl << endl;


    // bagian bilangan genap
    cout << "B. Bilangan Genap\n";
    
    // memanggil fungsi penampil bilangan genap
    printGenap();

    // menampilkan jumlah deret bilangan genap hingga batas angka
    cout << "\nJumlah bilangan genap dari angka 1 hingga " << batas << " adalah: " << jumlahGenap;

    // memanggil fungsi penampil faktor dari jumlah bilangan genap
    printFaktorGenap();
    // akhir dari bagian bilangan genap


    cout << endl << endl;


    // bagian bilangan prima
    cout << "C. Bilangan Prima\n";

    // memanggil fungsi penampil bilangan prima
    printPrima();

    // menampilkan jumlah deret bilangan prima hingga batas angka
    cout << "\nJumlah bilangan prima dari angka 1 hingga " << batas << " adalah: " << jumlahPrima;

    // memanggil fungsi penampil faktor dari jumlah bilangan prima
    printFaktorPrima();
    // akhir dari bagian bilangan prima

    return 0;
}

void printGanjil(){
    // loop bilangan bulat dari angka 1 hingga angka yang diinputkan user
    for (int i = 1; i <= batas; i++){
        if (i == 1){
            cout << "Bilangan ganjil dari angka 1 hingga " << batas << " adalah: ";
        }
        // menyaring bilangan ganjil dari angka 1 hingga angka yang diinputkan user
        if (i % 2 != 0){
            cout << i << " ";
            // memasukkan bilangan-bilangan ganjil yang telah disaring ke variabel jumlah
            jumlahGanjil+=i;
        }
    }
}

void printFaktorGanjil(){
    cout << "\nFaktor-faktor dari jumlah bilangan ganjil tersebut adalah: ";
    
    for (int i = 1; i <= jumlahGanjil; i++){
    // jika nilai i habis dibagi, maka nilai tersebut adalah faktornya
        if (jumlahGanjil % i == 0){
            cout << i << " ";
        }
    }
}

void printGenap(){
    // loop bilangan bulat dari angka 1 hingga angka yang diinputkan user
    for (int i = 1; i <= batas; i++){
        if (i == 1){
            cout << "Bilangan genap dari 1 hingga " << batas << " adalah: ";
        }
        // menyaring bilangan genap dari angka 1 hingga angka yang diinputkan user
        if (i % 2 == 0){
            cout << i << " ";
            // memasukkan bilangan-bilangan genap yang telah disaring ke variabel jumlah
            jumlahGenap+=i;
        }
    }
}

void printFaktorGenap(){
    cout << "\nFaktor-faktor dari jumlah bilangan genap tersebut adalah: ";

    for (int i = 1; i <= jumlahGenap; i++){
    // jika nilai i habis dibagi, maka nilai tersebut adalah faktornya
        if (jumlahGenap % i == 0){
            cout << i << " ";
        }
        
    }
}

void printPrima(){
    // loop bilangan bulat dari angka 1 hingga angka yang diinputkan user
    for (int i = 1; i <= batas; i++){
        if (i == 1){
            cout << "Bilangan prima dari 1 hingga " << batas << " adalah: ";
        }
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
}

void printFaktorPrima(){
    cout << "\nFaktor-faktor dari jumlah bilangan prima tersebut adalah: ";

    // loop dari angka 1 hingga nilai jumlah bilangan prima untuk mencari faktornya
    for (int i = 1; i <= jumlahPrima; i++){
    // jika nilai i habis dibagi, maka nilai tersebut adalah faktornya
        if (jumlahPrima % i == 0){
            cout << i << " ";
        }
        
    }
}