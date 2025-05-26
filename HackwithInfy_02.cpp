#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int j = 2; j < n; ++j) {
        if (n % j == 0) return false;
    }
    return true;
}
int main() {
    vector<int> prime ;
int n;
cout<<"Enter your number =";
cin>>n;

for (int num = 2; num <= n; ++num) {
        if (isPrime(num)) {
            prime.push_back(num);
        }
    }

    int l=0 ,r=1 , z=prime.size();
    while(r<z){
      int store =  (prime[l]*prime[l])+(prime[r]*prime[r]) ;
       if(store == n){
        cout<<prime[l]+prime[r];
        return 0;
       }
       else if(store < n) {
        r++;
       }
       else if(store > n) {
        l++;
        r--;
       }
    }
    cout<<-1;
return 0;
}
