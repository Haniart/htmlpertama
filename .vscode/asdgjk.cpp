#include <iostream>
#include <iomanip>
using namespace std;

// ================================
// FUNCTION UNTUK MENGHITUNG TOTAL
// ================================
float hitungTotal(int jumlah, float harga) {
    return jumlah * harga;
}

// FUNCTION PAJAK (10%)
float hitungPajak(float total) {
    return total * 0.10;
}

int main() {
    const int jmlMenu = 5;

    string menu[jmlMenu] = {
        "Nasi Goreng",
        "Mie Ayam",
        "Ayam Geprek",
        "Es Teh Manis",
        "Jus Alpukat"
    };

    float harga[jmlMenu] = {15000, 12000, 18000, 5000, 12000};

    int jumlahPesanan[jmlMenu] = {0};

    int pilih, jml;
    char lanjut;

    cout << "==============================\n";
    cout << "   PROGRAM PESANAN RESTORAN   \n";
    cout << "==============================\n\n";

    do {
        // Tampilkan menu
        cout << "Daftar Menu:\n";
        cout << "-------------------------------------------\n";
        for (int i = 0; i < jmlMenu; i++) {
            cout << i + 1 << ". " << setw(15) << left << menu[i]
                 << "Rp " << harga[i] << endl;
        }
        cout << "-------------------------------------------\n";

        cout << "Pilih menu (1-" << jmlMenu << "): ";
        cin >> pilih;

        // Validasi
        if (pilih < 1 || pilih > jmlMenu) {
            cout << "Pilihan tidak valid!\n";
            continue;
        }

        cout << "Jumlah pesanan: ";
        cin >> jml;

        // Tambah jumlah pesanan
        jumlahPesanan[pilih - 1] += jml;

        cout << "Tambah pesanan lagi? (y/n): ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    // ===============================
    // HITUNG TOTAL BELANJA
    // ===============================
    float subtotal = 0;

    cout << "\n\n===== STRUK PEMBAYARAN =====\n";
    cout << left << setw(20) << "Menu"
         << setw(10) << "Jumlah"
         << "Total\n";
    cout << "----------------------------------------\n";

    for (int i = 0; i < jmlMenu; i++) {
        if (jumlahPesanan[i] > 0) {
            float totalMenu = hitungTotal(jumlahPesanan[i], harga[i]);
            subtotal += totalMenu;

            cout << left << setw(20) << menu[i]
                 << setw(10) << jumlahPesanan[i]
                 << totalMenu << endl;
        }
    }

    float pajak = hitungPajak(subtotal);
    float totalAkhir = subtotal + pajak;

    cout << "----------------------------------------\n";
    cout << "Subtotal : Rp " << subtotal << endl;
    cout << "Pajak 10%: Rp " << pajak << endl;
    cout << "TOTAL    : Rp " << totalAkhir << endl;
    cout << "========================================\n";

    cout << "Terima kasih telah memesan!\n";

    return 0;
}
