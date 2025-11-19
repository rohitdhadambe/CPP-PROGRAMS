#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    vector<int> arrival = {900, 940, 950, 1100, 1500, 1800};
    vector<int> departure = {910, 1200, 1120, 1130, 1900, 2000};

    sort(arrival.begin(),arrival.end());
    sort(departure.begin(),departure.end());
    int a=0, d=0, platform=0, maxiplatform=0, n=arrival.size();

    while(a<n && d<n){
          if(arrival[a]<departure[d]){
            platform++;
            a++;
            maxiplatform = max(maxiplatform,platform);
          }else{
            platform--;
            d++;
          }
    }

    cout<<"---->"<<maxiplatform;


return 0;
}