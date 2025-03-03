#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    //  vector<int> A={4,1,8,7};
    //  vector<int> B={2,3,6,5};
    vector<int> A={1,2,3};
    vector<int> B={3,2,1};
        int sum = 0 ;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());

   for(int i=0; i<A.size(); i++){
       sum = sum + abs(A[i]-B[i]);
   }

   cout<<sum;
return 0;
}