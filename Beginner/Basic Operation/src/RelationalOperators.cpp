#include <iostream>

/**
 * Relational Operator sebenarnya tidak berbeda jauh dengan Logical Operator yang sebelumnya kita telah pelajari, tentunya hasil dari ekspresi yang diberikan adalah true (1) dan false (0).
 * 
 * Didalam pembelajaran ini tidak ada output nya jadi hanya dituliskan dengan comment saja untuk menghasilkan output nya.
 */

int main() {
    
    /**@brief Equal To (==)
     * 
     * Operator ini biasa digunakan untuk melihat hasil atau nilai yang sama dari kedua variable
     */
    5 == 5; // true
    3 == 4; // false 

    /**@brief Not Equal To (!=)
     *  
     * Operator ini biasa digunakan untuk melihat keterbalikan hasil atau nilai dari kedua variable
     */
    5 != 2; // true
    1 != 1; // false

    /**@brief Greater Than (>)
     * 
     * Operator ini digunakan untuk membandingkan dari kedua nilai yang lebih besar dari 
     */
    5 > 3; // true
    2 > 3; // false

    /**@brief Less Than (<)
     * 
     * Operator ini digunakan untuk membandingkan dari kedua nilai yang kurang dari
     */
    3 < 5; // true
    6 < 4; // false

    /**@brief Greater Than or Equal To (>=)
     * 
     * Operator ini digunakan untuk membandingkan lebih besar dari atau sama dengan dari
     */
    5 >= 5; // true
    6 >= 2; // true
    3 >= 4; // false

    /**@brief Less Than or Equal To (<=)
     * 
     * Operator ini digunakan untuk membandingkan kurang dari atau sama dengan dari
     */
    4 <= 4; // true
    2 <= 3; // true
    5 <= 4; // false

    return 0;
}
