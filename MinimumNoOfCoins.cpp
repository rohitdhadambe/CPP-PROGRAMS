// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
  
//     int Target = 7 , i=0 , sum=0 , count=0;
//     vector <int> v1 = {5,2};

//     sort(v1.rbegin(), v1.rend());

//     while(i<v1.size()){
//     if(sum==Target) {
//         cout<<count;
//         return 0;
//     }

//      if(sum<Target){
//         count++;
//        sum += v1[i];
//     }
//     if(sum>Target){
//         count--;
//        sum -= v1[i];
//        i++;
//     }
// }

// cout<<-1;

// return 0;

// }

//------------------------------------------------------------------------------//

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minCoins(int Target, vector<int> &coins) {
    vector<int> dp(Target + 1, INT_MAX);
    dp[0] = 0;  // 0 coins needed to make sum 0

    for (int i = 1; i <= Target; i++) {
        for (int coin : coins) {
            if (i >= coin && dp[i - coin] != INT_MAX)
                dp[i] = min(dp[i], dp[i - coin] + 1);
        }
    }

    return (dp[Target] == INT_MAX) ? -1 : dp[Target];  // Return -1 if no solution exists
}

int main() {
    int Target = 7;
    vector<int> coins = {6,3,2};  // You can change this to any set of coins

    cout << "Minimum number of coins: " << minCoins(Target, coins) << endl;
    return 0;
    
}
