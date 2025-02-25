#include <iostream>
#include <vector>
using namespace std;
int main() {
  
    int Target = 13 , i=0 , sum=0 , count=0;
    vector <int> v1 = {5,1};

    while(1){
    if(sum==Target) {
        cout<<count;
        return 0;
    }

     if(sum<Target){
        count++;
       sum += v1[i];
    }
    if(sum>Target){
        count--;
       sum -= v1[i];
       i++;
    }
}

return 0;
}




// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int Target = 16, i = 0, sum = 0, count = 0;
//     vector<int> v1 = {5, 2, 1};

//     while (i < v1.size()) {
//         if (sum == Target) {
//             cout << count;
//             return 0;
//         }
        
//         if (sum < Target) {
//             sum += v1[i];
//             count++;
//         } else {  // sum > Target
//             sum -= v1[i];
//             count--;
//             i++;  // Move to the next element
//         }
//     }

//     cout << "Not possible to reach target" << endl;
//     return 0;
// }
