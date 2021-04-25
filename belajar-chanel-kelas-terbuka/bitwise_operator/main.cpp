// * berguna untuk menjalankan microcontroller

#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void printBinary(unsigned short *val, string name)
{
    cout << name << " = " << bitset<8>(*val) << endl;
}

int main()
{
    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    cout << "\n";

    cout << "& = Bitwise AND" << endl;
    c = a & b;
    printBinary(&a, "a");
    printBinary(&b, "b");
    printBinary(&c, "c");

    cout << "\n| = Bitwise OR" << endl;
    c = a | b;
    printBinary(&a, "a");
    printBinary(&b, "b");
    printBinary(&c, "c");

    cout << "\n^ = Bitwise XOR" << endl;
    c = a ^ b;
    printBinary(&a, "a");
    printBinary(&b, "b");
    printBinary(&c, "c");

    cout << "\n~ = Bitwise NOT" << endl;
    c = ~a;
    printBinary(&a, "a");
    printBinary(&c, "c");

    cout << "\n<< = Shift bits left" << endl;
    c = a << 2;
    printBinary(&a, "a");
    printBinary(&c, "c");

    cout << "\n>> = Shift bits right" << endl;
    c = a >> 2;
    printBinary(&a, "a");
    printBinary(&c, "c");

    return 0;
}

// bitwise operator
// & AND Bitwise AND
// | OR Bitwise Inclusive OR
// ^ XOR Bitwise Exclusive OR
// ~ NOT
// << SHL Shift bits left
// >> SHR Shift bits right