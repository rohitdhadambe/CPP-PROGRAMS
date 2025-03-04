#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector<int> coins = {1,2,5,10,20,50,100,200,500,2000};
    int val =43, count=0, i=9;
    cout<<" coins note = ";
    while(val != 0){
        
        if(val >= coins[i]){
            cout<<coins[i]<<" ";
            val = val - coins[i];
            count++;
        }else{
            i--;
        }
    }

    cout<<"\n"<<"total coins = "<<count;


return 0;
}