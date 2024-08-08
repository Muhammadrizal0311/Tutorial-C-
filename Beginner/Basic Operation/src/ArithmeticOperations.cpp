#include <iostream>

/**
 * Operator aritmatika digunakan untuk melakukan operasi matematika dengan variabel dasar
 * seperti bilangan bulat dan bilangan floating-point. 
 */

int main() {
    
    int a = 5;
    int b = 2;

    // Addition Operator
    int sum = a + b;
    
    // subtraction Operator
    int difference = a - b;

    // Multiplication Operator
    int multiply = a * b;

    // Division Operator
    int quotient1 = a / b;
    float quotient2 = float(a) / float(b);

    // Modulus Operator
    int modulo = a % b;

    /**@brief Increment Operator
     * 
     * Increment Operator (x++):
     *  - Ketika Anda menggunakan y = x++;, nilai x diberikan ke y terlebih dahulu,
     *    kemudian x ditambah 1. 
     *  - Jadi, y akan memiliki nilai awal x (5), dan setelah itu x akan menjadi 6.
     * 
     * Increment Operator (++x): 
     *  - Ketika Anda menggunakan z = ++x;, x akan ditambah 1 terlebih dahulu, kemudian nilainya diberikan ke z.
     *  - Jadi, z akan memiliki nilai 7 karena x sudah ditingkatkan sebelumnya.
     */
    int x = 5;
    int y = x++;
    int z = ++x;
    
    /**@brief Decrement Opertor
     * 
     * Decrement Operator (l–):
     *  - Ketika Anda menggunakan m = l--;, nilai l diberikan ke m terlebih dahulu, kemudian l dikurangi 1.
     *  - Jadi, m akan memiliki nilai awal l (5), dan setelah itu l akan menjadi 4.
     * 
     * Decrement Operator (–l):
     *  - Ketika Anda menggunakan n = --l;, l akan dikurangi 1 terlebih dahulu, kemudian nilainya diberikan ke n.
     *  - Jadi, n akan memiliki nilai 3 karena l sudah dikurangi sebelumnya.
     */
    int l = 5;
    int m = l--;
    int n = --l;

    // Display

    std::cout << "Hasil dari Sum: " << sum << std::endl;
    
    std::cout << "Hasil dari Difference: " << difference << std::endl;
    
    std::cout << "Hasil dari Multiply: " << multiply << std::endl;
    
    std::cout << "Hasil dari Quotient 1: " << quotient1 << std::endl;
    
    std::cout << "Hasil dari Quotient 2: " << quotient2 << std::endl;

    std::cout << "Hasil dari Modulus: " << modulo << std::endl;

    std::cout << "Hasil dari Increment y: " << y << std::endl;

    std::cout << "Hasil dari Increment z: " << z << std::endl;
    
    std::cout << "Hasil dari Decrement m: " << m << std::endl;

    std::cout << "Hasil dari Decrement n: " << n << std::endl;

    return 0;
}