#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
private:
    int id_Kendaraan;
    string nama_Kendaraan;

public:
    // 1. Constructor tanpa parameter (default)
    Kendaraan() {
        // Menggunakan id_Kendaraan default 0 dan nama default "tidak ada"
        id_Kendaraan = 0;
        nama_Kendaraan = "tidak ada";
    }

    // 2. Constructor hanya dengan parameter id
    Kendaraan(int id) {
        id_Kendaraan = id;
        nama_Kendaraan = "tidak ada"; // Nama default untuk data tak lengkap
    }

    // 3. Constructor hanya dengan parameter nama
    Kendaraan(string nama) {
        id_Kendaraan = 0; // ID default untuk data tak lengkap
        nama_Kendaraan = nama;
    }

    // 4. Constructor lengkap (id dan nama)
    Kendaraan(int id, string nama) {
        id_Kendaraan = id;
        nama_Kendaraan = nama;
    }

    // Metode untuk menampilkan data kendaraan
    void tampilkan() {
        cout << "Id Kendaraan : " << id_Kendaraan << endl;
        cout << "Nama Kendaraan : " << nama_Kendaraan << endl;
    }
};

int main() {
    cout << "--- Daftar Inventaris Kendaraan ---" << endl;

    // K1: Menggunakan Constructor Tanpa Parameter
    Kendaraan k1;
    cout << "\nKendaraan 1 (Default):" << endl;
    k1.tampilkan();

    // K2: Menggunakan Constructor Hanya Parameter ID
    Kendaraan k2(101);
    cout << "\nKendaraan 2 (Hanya ID):" << endl;
    k2.tampilkan();

    // K3: Menggunakan Constructor Hanya Parameter Nama
    // Perhatikan tanda kutip dua untuk menandakan string
    Kendaraan k3("Sepeda Motor");
    cout << "\nKendaraan 3 (Hanya Nama):" << endl;
    k3.tampilkan();

    // K4: Menggunakan Constructor Lengkap (ID dan Nama)
    Kendaraan k4(202, "Mobil Toyota");
    cout << "\nKendaraan 4 (Lengkap):" << endl;
    k4.tampilkan();

    return 0;
}