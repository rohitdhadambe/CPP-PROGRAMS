// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int count = 1;
//     vector<int> v1;
//     vector<int> srt = {1, 3, 0, 5, 8, 5};
//     vector<int> end = {2, 4, 6, 7, 9, 9};
    
//     v1.push_back(0);
//     int last_end = end[0];
    
//     for (int i = 1; i < srt.size(); i++) { // Start from index 1
//         if (srt[i] >= last_end) { // Check non-overlapping condition
//             v1.push_back(i);
//             count++;
//             last_end = end[i];
//         }
//     }
    
//     cout << count << "\n";
//     for (auto it : v1) cout << it << " ";
    
//     return 0;
// }


//---------------------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int,int>a , pair<int,int>b){
    return a.second < b.second;
}

int main() {
    int count = 1;
    vector<pair<int,int>> v1;
    vector<int> A = {5,39,5,27,50};
    vector<int> B = {24,60,28,40,90};

      for(int i=0;i<A.size();i++)  v1.push_back({A[i],B[i]});
      sort(v1.begin(),v1.end(),comp);
      
       int store = v1[0].second;
       for(int i=1;i<A.size();i++) {
           if(v1[i].first >= store){
               count ++;
               store = v1[i].second;
           }
       }
   
       cout<<count;
    return 0;
}
