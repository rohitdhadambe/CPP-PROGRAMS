#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int>v1 = {1,6,3,6}; //8,-1,1,3,-1
    vector<int>v2;
    int n = v1.size();
  for(int i=0; i<v1.size();i++){
    for(int j=i+1; j<v1.size();j++){
     if(v1[i]<v1[j])
     { v2.push_back(v1[j]);
     break;
     }
     if(j == n-1) 
     v2.push_back(-1);
    } 
  }
  v2.push_back(-1);
  for(auto it : v2) cout<<it<<" ";

return 0;
}