#include <iostream>
#include <string>
using namespace std;
int main() {
     
    string s1="1";
    string s2="";
    int count = 1 , n=1;

     for(int i=0; i<n-1; i++){
        for(int j=0; j<s1.length(); j++){
              if(s1[j]==s1[j+1]){
                 count++;
              }else{
                string x = to_string(count);
                s2 = s2 + x;
                s2 = s2 + s1[j];
                count = 1;
            }
        }
        s1 = s2;
        s2 = "";
     }
    
cout<<s1;
    
return 0;
}