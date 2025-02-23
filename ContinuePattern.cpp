#include <iostream>
using namespace std;
int main() {
   
    int n = 6;
    int k, num, firstNum = 1;

    for (int i = 1; i <= n; i++) {
        num = firstNum;  // First number of the row
        k = n - i + 1;   // Initial decrement value
        firstNum += k;   // Update firstNum for next row

        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num -= k;  // Decrease by k
            k++;       // Increment k for next column
        }
        cout << endl;
    }

return 0;
}