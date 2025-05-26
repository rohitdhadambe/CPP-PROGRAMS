#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1 = "hallohh";
    string s2 = "allo";
    int pos =  s1.find(s2) ;
    int sum=0;

    while(pos!= -1){
        sum = sum + pos+1;
        pos =  s1.find(s2 , pos+1);

    }

    cout<<sum;

return 0;
}