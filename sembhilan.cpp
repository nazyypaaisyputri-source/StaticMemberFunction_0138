#include <iostream>
#include <string>
using namespace std;

class Produk {
private:
    int id_Produk;
    string nama_Produk;

public:
    // 1. Constructor tanpa parameter
    Produk() {
        id_Produk = 0;
        nama_Produk = "tidak ada";
    }

    // 2. Constructor dengan parameter id
    Produk(int id) {
        id_Produk = id;
        nama_Produk = "tidak ada";
    }

    // 3. Constructor dengan parameter nama
    Produk(string nama) {
        nama_Produk = nama;
        id_Produk = 0;
    }

    // 4. Constructor dengan parameter lengkap
    Produk(int id, string nama) {
        id_Produk = id;
        nama_Produk = nama;
    }

    // Method untuk menampilkan data
    void tampilkan() {
        cout << "Id Produk   : " << id_Produk << endl;
        cout << "Nama Produk : " << nama_Produk << endl;
        cout << "----------------------------" << endl;
    }
};

int main() {
    cout << "--- Daftar Inventaris Toko ---" << endl << endl;

    // Membuat objek sesuai contoh di foto
    Produk p1;
    p1.tampilkan();

    Produk p2(11);
    p2.tampilkan();

    Produk p3("Laptop");
    p3.tampilkan();

    Produk p4(21, "Keyboard");
    p4.tampilkan();

    return 0;
}