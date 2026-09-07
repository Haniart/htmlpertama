#include <iostream>
using namespace std;

int main() {
    int nilai;
    char grade;

    cout << "Masukkan nilai (0-100): ";
    cin >> nilai;

    if (nilai >= 80 && nilai <= 100) {
        grade = 'A';
    } else if (nilai >= 70 && nilai <= 79) {
        grade = 'B';
    } else if (nilai >= 60 && nilai <= 69) {
        grade = 'C';
    } else if (nilai >= 50 && nilai <= 59) {
        grade = 'D';
    } else if (nilai >= 0 && nilai < 50) {
        grade = 'E';
    } else {
        cout << "Nilai tidak valid!" << endl;
        return 0;
    }
    cout << "Nilai huruf: " << grade << endl;
    return 0;
}