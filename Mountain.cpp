#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int>v1={1,2,3,4,5};
    int count = 0;
    int n = v1.size() , mid = n/2;
     if(n%2==0){
        for(int i=mid-1; i>0;i--){
            if(v1[i-1] != v1[i]-1){
                v1[i-1] = v1[i]-1;
                count++;
            }
        }
        for(int i=mid; i<n-1;i++){
            if(v1[i+1] != v1[i]-1){
                v1[i+1] = v1[i]-1;
                count++;
            }
        }
     }else{
        for(int i=mid; i>0;i--){
            if(v1[i-1] != v1[i]-1){
                v1[i-1] = v1[i]-1;
                count++;
            }
        }
        for(int i=mid; i<n-1;i++){
            if(v1[i+1] != v1[i]-1){
                v1[i+1] = v1[i]-1;
                count++;
            }
        }
     }

    // for(auto E : v1) cout<<E<<" , ";
    cout<<count;
    
return 0;
}