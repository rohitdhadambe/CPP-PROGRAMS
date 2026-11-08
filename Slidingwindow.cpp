// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
// vector <int> v1= {2, 1, 5, 1, 3, 2};
// int k = 3, sum = 0, maxi = 0;
// for(int i=0; i<=v1.size()-k; i++){
//    for(int j=0; j<k; j++){
//        sum = v1[i+j] + sum;
//    }
//    maxi = max(maxi, sum);
//    sum=0;
// }
// cout<<maxi<<"  ";
// return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
int main() {
vector <int> v1= {2, 1, 5, 1, 3, 2};
int k = 3, sum = 0, maxi = 0;

for(int i=0; i<k; i++){
   sum = sum + v1[i];
}

maxi = sum;

for(int i=k; i<v1.size(); i++){
 sum = sum - v1[i-k]  + v1[i];
         maxi = max(maxi, sum);

}
cout<<maxi<<"  ";

return 0;
}