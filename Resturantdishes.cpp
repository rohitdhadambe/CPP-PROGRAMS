#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {

    vector<int> Arr = {2,2,1,1,1,1,1};
   
    map<int, int> freq;
    for (int dish : Arr) {
        freq[dish]++;
    }

    vector<int> dishCounts;
    for (auto it : freq) {
        dishCounts.push_back(it.second);
    }

    sort(dishCounts.begin(), dishCounts.end());

    int maxEaten = 0;
    for (int start : dishCounts) {
        int count = start;
        int totalEaten = 0;
        int index = 0;
        
        while (index < dishCounts.size()) {
            if (dishCounts[index] >= count) {
                totalEaten += count;
                count *= 2;
            }
            index++;
        }
        maxEaten = max(maxEaten, totalEaten);
    }

    cout << maxEaten << endl;
    return 0;
}

