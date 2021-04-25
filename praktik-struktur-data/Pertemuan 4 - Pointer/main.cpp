#include <iostream>

int angkaKeramat(int angka){
    return angka;
}

int main(){
    int a = 20;
    int *p;
    p = &a;
    a = 5;
    std::cout << *p;
    return 1;
}