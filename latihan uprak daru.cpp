#include <iostream>
using namespace std;
// ===== PROCEDURE INSERTION SORT =====
void insertionsort (int a[],int n){
int i = 1;
int j,t ;
while (i < n){
t = a[i];
j = i -1;
while (j >= 0 && a[j] > t){
a[j + 1] = a[j];
j= j-1;
}
a[j+1] = t;
i= i + 1;
}
}

// ===== PROGRAM UTAMA =====
int main() {
int n;
cout << "Masukkan jumlah data: ";
cin >> n;
int A[n];
for(int i = 0; i < n; i++) {
cin >> A[i];
}
insertionsort(A, n);
cout << "\nData setelah diurutkan:\n";
for(int i = 0; i < n; i++) {
cout << A[i] << " ";
}
return 0;
}