//  #include <iostream>
//  using namespace std;
//  int main() {
//      for(int i=1; i<=4; i++){
//         for(int j=i; j<i+i; j++){
//             cout<<j;
//         }
//         cout<<"\n";
//      } 
//  return 0;
//  }

#include <iostream>
using namespace std;

int main() {
    int rows = 4; // Number of rows in the pattern
    for (int i = 1; i <= rows; i++) {
        int num = i; // Starting number for each row
        for (int j = 1; j <= i; j++) {
            cout << num++;
        }
        cout << endl;
    }
    return 0;
}


