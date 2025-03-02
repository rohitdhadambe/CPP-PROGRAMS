#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector <int>v1 ={1,2,3};
    int n = 3 , sum = 0 , res = 0;
    priority_queue <int,vector<int>,greater<int>> q1; //min heap
    
    for (auto i : v1) q1.push(i);

// while (!q1.empty())
// {
//     cout<<q1.top();
//     q1.pop();
// }


    int sum1=0, sum2=0;
    int i=0;
 while(i!=n-1){

     sum1 = q1.top();
     q1.pop();
     sum2 = q1.top();
     q1.pop();
    sum = sum1 + sum2;
    res = res + sum;
    
     q1.push(sum);
     cout<<"\n"<<sum;
     i++;
 }

 cout<<"\n"<<res;

return 0;
}