#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  for(int i=n; i>0; i--){

     for(int k=n; k>=i; k--){
       cout<<"_";
  }
  
   for(int j=i; j>0; j--){
       cout<<j;
  }
  
  cout<<"\n";

  }

return 0;
}