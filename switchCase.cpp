#include <iostream>
using namespace std;

// Deklarasikan variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

// Prosedur Input
void input() {
    cout << "=== PENDAFTARAN JURUSAN KAMPUS ===" << endl;
    cout << "1. Teknologi Informasi" << endl;
    cout << "2. Teknik Elektro" << endl;
    cout << "3. Sistem Informasi" << endl;
    cout << "----------------------------------" << endl;
    cout << "Masukkan kode jurusan (1-3): ";
    cin >> kodeJurusan;
}

// Prosedur untuk Pengecekan Kondisi
void pilihanJurusan(){
    switch (kodeJurusan)
    {
    case 1:
        namaJurusan = "Teknologi Informasi";
        statusKuota = "Tersedia (15 Kursi)";
        break;
    case 2:
        namaJurusan = "Teknik Elektro";
        statusKuota = "Kuota Penuh";
        break;
    case 3:
        namaJurusan = "Sistem Informasi";
        statusKuota = "Kuota Penuh";
        break;
    default:
        namaJurusan = "Tidak Diketahui";
        statusKuota = "Error: Kode Tidak Valid";
    }
}

// Prosedur Output
void output(){
    cout << "=========== HASIL SELEKSI ===========" << endl;
    cout << "Jurusan Pilihan : " << namaJurusan << endl;
    cout << "Status Kuota    : " << statusKuota << endl;
    cout << "-------------------------------------" << endl;
}

int main (){
    input();
    pilihanJurusan();
    output();

    return 0;
}