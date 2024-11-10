#include <iostream>
using namespace std;

int main() {
    // print
    cout << "Hello world!\n";
    cout << "Divyanka\nPagare";

    int age = 20;
    cout << sizeof(age) << endl; //4 bytes

    /*
    A = 65, B = 66, C = 67
    a = 97, b = 98, c = 99
    */

    char grade = 'A'; // sizeof = 1 byte
    float PI = 3.14; // sizeof = 4 bytes
    bool isSafe = true; // sizeof = 1 byte
    double price = 100.99; // sizeof = 8 bytes

    cout << grade << endl; // A
    int value = grade;
    cout << value << "\n"; // 65 (stors ASCII val in variable)

    // type casting 
    //type conversion is implicit and type casting is explicit
    int newPrice = (int)price;  //type cast the value of price from double into int 
    cout << newPrice << endl;  // from 100.99 to 100

    //input output
    double price1;
    cout << "Enter the price you want to store: ";
    cin >> price1;
    cout << "Price : " << price1 << endl;
    return 0;
}