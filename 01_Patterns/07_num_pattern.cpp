#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < i + 1; j++) {
            // cout << i << " ";
            cout << i+1 << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
output

1 
2 2
3 3 3
4 4 4 4
*/