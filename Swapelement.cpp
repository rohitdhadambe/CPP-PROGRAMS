#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int>v1 = {2,1,1,1,1};
    int cons=0 , move = v1.size()-1 , k=3;
        while(cons < move){
           if(abs(cons - move) == k){
            int temp = v1[move];
            v1[move] = v1[cons];
            v1[cons] = temp;
           }
           move--;
        }

         for (int i = 0; i < v1.size(); i++) {
         cout << v1[i] << " ";
    }
     return 0;
}

