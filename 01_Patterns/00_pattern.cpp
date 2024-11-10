#include <iostream>
using namespace std;

int main() {

    int n = 4;
    

    for (int i = 0; i < n; i++) {  //outer -> rows

        int num = 1;

        for (int j = 0; j < n; j++) { //inner loop -> what we want to do in each row (logic)
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}