#include <iostream>
#include <string>
#include <map>

using namespace std;
int main() {
   string s1 = "abcabcabcabc";
   int mini=INT_MAX;
   map<char , int> m1;
      for(int i=0; i<s1.length();i++){
        m1[s1[i]]++;
      }

      for(auto it : m1){
        mini = min (mini , it.second);
      }
    cout<<mini ; 
return 0;
}