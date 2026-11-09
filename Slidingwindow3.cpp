#include <iostream>
#include <vector>
using namespace std;
int main() {
vector <int> v1=  {2, 1, 5, 1, 3, 2};
int maxi = 0, maxi2 = 0;
for(int i=0; i<v1.size(); i++){
if(v1[i]>maxi){
    maxi = v1[i];
}
}
cout<<"First max = "<<maxi;

for(int i=0; i<v1.size(); i++){
    if(v1[i]<maxi && v1[i]>maxi2){
    maxi2 = v1[i];
}
}

cout<<"Second max = "<<maxi2;


return 0;
}