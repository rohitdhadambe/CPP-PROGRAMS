#include <iostream>
#include <vector>
using namespace std;

int main() {
    int count = 1;
    vector<int> v1;
    vector<int> srt = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};
    
    v1.push_back(0);
    int last_end = end[0];
    
    for (int i = 1; i < srt.size(); i++) { // Start from index 1
        if (srt[i] >= last_end) { // Check non-overlapping condition
            v1.push_back(i);
            count++;
            last_end = end[i];
        }
    }
    
    cout << count << "\n";
    for (auto it : v1) cout << it << " ";
    
    return 0;
}
