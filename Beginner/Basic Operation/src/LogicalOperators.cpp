#include <iostream>

/**
 * Logical Operators digunakan untuk menghasilkan perhitungan logika yang kebanyakannya untuk melakukan test hubungan antara perbedaan variable atau nilai yang ada.
 * 
 * Hasil yang akan dikeluarkan nantinya bersifat Boolean, yaitu true (1) dan false (0) berdasarkan hasil dari evaluasinya.
 */

int main() {
    
    // Declaration Variable
    int a = 5, b = 10;
    
    // AND Operator (&&)
    if (a > 0 && b > 0) {
        std::cout << "Kedua nilainya adalah positif." << std::endl;
    }

    // OR Operator (||)
    if (a > 0 || b > 0) {
        std::cout << "Salah satu dari nilainya adalah positif." << std::endl;
    }

    // NOT Operator (!)
    if (!(a < 0)){
        std::cout << "Nilai yang diberikan bukanlah negatif." << std::endl;
    }

    // Example Logical Expression
    int c = 5, d = -10, e = 15;
    
    if (c > 0 && (d > 0 || e > 0)) {
        std::cout << "Kedua nilainya adalah positif." << std::endl;
    }

    return 0;
}
