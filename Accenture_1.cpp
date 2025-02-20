#include <iostream>
using namespace std;

int main() {
    int arr[] = { 3, 4, 4};
    int count = -1;
    int n = 4; // Number of elements in the array

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == 3 && arr[i + 1] == 4) {
            swap(arr[i], arr[i + 1]);
            count++;
            i=-1;
        }
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout<<"\n";
    }

    // Printing the updated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\n" << count;
    return 0;
}
