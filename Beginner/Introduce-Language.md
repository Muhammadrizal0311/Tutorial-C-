# Introduce Language C++



## Ringkasan
Pada tingkatan awal ketika belajar bahasa pemrograman C++, tentunya kita harus mengetahui terlebih dahulu apa itu C++, kenapa menggunakan C++ dan perbedaan C dengan C++. 

Tentunya dengan begitu kita jadi lebih mudah dalam memahammi dan mengerti tujuan serta maksud dari pembelajaran ini. 

### Apa itu C++ ? 
C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language. It was first introduced in 1985 and provides object-oriented features like classes and inheritance. C++ is widely used in various applications like game development, system programming, embedded systems, and high-performance computing.

C++ is a statically-typed language, meaning that the type of a variable is determined during compilation, and has an extensive library called the C++ Standard Library, which provides a rich set of functions, algorithms, and data structures for various tasks.

C++ builds upon the features of C, and thus, most C programs can be compiled and run with a C++ compiler.

#### Code Example
Here’s a simple example of a C++ program that demonstrates some essential features of the language:

```cpp
#include <iostream>

// Function sederhana untuk melakukan perhitungan
int add(int a, int b) {
    return a + b;
}

class Calculator {
public:
    // Anggota (member) Function dari sebuah Class dari Calculator
    int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    int x = 5;
    int y = 3;

    // Menggunakan standalone Function yang telah kita definisikan sebelumnya
    int sum = add(x, y);
    std::cout << "Sum: " << sum << std::endl;

    // Menggunakan function dari class yang kita deklarasikan dan definisikan sebelumnya
    Calculator calc;
    int product = calc.multiply(x, y);
    std::cout << "Product: " << product << std::endl;

    return 0;
}
```

In the above program, we define a simple function add and a class Calculator with a member function multiply. The main function demonstrates how to use these to perform basic arithmetic.

### Kenapa menggunakan C++ ?
C++ is a popular and widely used programming language for various reasons. Here are some of the reasons why you might choose to utilize C++:

#### Performance
C++ is designed to provide high performance and efficiency. It offers fine-grained control over system resources, making it easier to optimize your software.

#### Portability
C++ is supported on different computer architectures and operating systems, allowing you to write portable code that runs on various platforms without making major modifications.

#### Object-Oriented Programming
C++ supports object-oriented programming (OOP) - a paradigm that allows you to design programs using classes and objects, leading to better code organization and reusability.

```cpp
class MyClass {
    public:
        void myFunction() {
            // Code here
        }
};

int main() {
    MyClass obj;
    obj.myFunction();
}
```

#### Support for low-level and high-level programming
C++ allows you to write both low-level code, like memory manipulation, as well as high-level abstractions, like creating classes and using the Standard Template Library (STL).

```cpp
#include <iostream>
#include <vector>

int main() {
    // Low-level programming
    int number = 42;
    int* ptr_number = &number;

    // High-level programming
    std::vector<int> myVector = {1, 2, 3};
    for(const auto &i: myVector) {
        std::cout << i << std::endl;
    }
}
```

#### Extensive Libraries
C++ offers a vast range of libraries and tools, such as the Standard Template Library (STL), Boost, and Qt, among others, that can aid in the development of your projects and make it more efficient.

#### Combination with C language
C++ can be combined with C, offering the capabilities of both languages and allowing you to reuse your existing C code. By incorporating C++ features, you can enhance your code and improve its functionality.

#### Active Community
C++ has been around for a long time and has a large, active community of users who contribute to the growth of the language, express new ideas, and engage in discussions that help develop the language further. This makes finding solutions to any problems you experience much easier.

In summary, C++ offers a great balance of performance, portability, and feature set, making it a versatile and powerful programming language suitable for many applications. With its extensive libraries, active community, and continuous development, C++ is an excellent choice for any software development project.

### Perbedaan C vs C++ ? 
