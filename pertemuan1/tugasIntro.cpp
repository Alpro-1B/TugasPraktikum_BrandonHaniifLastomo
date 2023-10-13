#include <iostream>
using namespace std;

    void garis(int strlength) {
        for (int i = 0; i < strlength; i++){
            cout << "-";
        }
        
    }

int main(){

    string motivasi = "Motivasi Masuk Informatika: Memiliki kemampuan di Matematika, minat dengan pemrograman, dan linear dengan jurusan di SMK";

    garis(motivasi.length());

    cout << "\nNama: Brandon Haniif Lastomo\n" << endl;
    cout << "NPM: 2310631170128\n" << endl;
    cout << "Kelas: B - Informatika\n" << endl;
    cout << "Cita-cita: Web developer\n" << endl;
    cout << motivasi << endl;

    garis(motivasi.length());

    cin.get();
    return 0;
}