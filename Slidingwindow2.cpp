    #include <iostream>
    #include <vector>
    using namespace std;
    int main() {
    vector <int> v1=  {1, 3, 2, 6, -1, 4, 1, 8, 2};
    vector <float> v2;
    float k=5;
    float sum = 0, av =0;

    for(int i=0; i<k; i++){
    sum = sum + v1[i];
    }
    av = sum / k;
    v2.push_back(av);
    av = 0;
    for(int i=k; i<v1.size(); i++){
        sum = sum - v1[i-k] + v1[i];
        av = sum / k;
        v2.push_back(av);
        av=0;
    }

    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }


    return 0;

    }