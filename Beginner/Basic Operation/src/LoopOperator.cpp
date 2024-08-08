#include <iostream>

/**
 * Loop adalah konsep yang sangat penting didalam permrograman yang mengizinkan untuk mengeksekusikan sebuah program secara perulangan sesuai dengan block code yang telah ditentukan.
 * 
 * Didalam pembelajaran hari ini tentunya kita akan mengenal 3 perulangan didalam bahasa C++ yaitu for, while dan do-while.
 */

int main() {
    
    /**@brief For Loop (initialization; condition; increment/decrement)
     * 
     * Didalam for loop terdapat 3 paramenter yaitu, inisialisasi nilai awal, kondisi yang akan mengeksekusi sebuah block code nya, dan increment atau decrement sebagai perlakukan selanjutnya.
     */
    for (int i = 0; i < 5; i++) {
        std::cout << "Iteration for: " << i << std::endl;
    }

    /**@brief While Loop (condition)
     * 
     * Didalam while loop hanya terdapat 1 parameter saja, yaitu kondisi nya dan untuk iterasi decrement/increment nya akan dilakukan didalam block code nya.
     * 
     * Biasanya perulangan ini digunakan untuk penulisan yang lebih clean code dan sudah dipastikan bahwa variable awalnya sudah diinisialisasikan terlebih dahulu.
     */
    int i = 0;
    while (i < 5) {
        std::cout << "Iteration while: " << i << std::endl;
        i++; // Increment untuk melanjutkan perulangannya
    }

    /**@brief Do-While (condition)
     * 
     * Do While Loop adalah perulangan yang cukup unik karna, memiliki kinerja yang berbeda dari perulangan diatas. Karna kita akan mengeksekusikan terlebih dahulu baru akan melakukan kondisi atau pengecekan setelahnya.
     * 
     * Walaupun kondisinya tidak memenuhi syarat, Do-While Loop akan tetap mengeksekusikan program nya terlebih dahulu, baru melakukan pengecekan.
     */
    int a = 0;
    do {
       std::cout << "Iteration do-while: " << a << std::endl;
       a++; // Increment Loop
    } while (a < 5);
    
    return 0;
}
