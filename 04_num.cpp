#include <iostream>
using namespace std;

int main() {

    int n = 3;
    int num = 1;   //outside outer loop to avoid starting from 1 again

    for (int i = 0; i < n; i++) {  //outer -> rows

        for (int j = 0; j < n; j++) { //inner loop -> what we want to do in each row (logic)
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}

/*

o/p ->

1 2 3 
4 5 6
7 8 9

 */