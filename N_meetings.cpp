#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Meeting {
    int start;
    int end;
    int index;
};

int main() {
    int start[] = {0, 3, 1, 5, 5, 8};
    int end[]   = {5, 4, 2, 9, 7, 9};
    int n = 6;

    vector<Meeting> meetings;

     for (int i = 0; i < n; i++) {
        meetings.push_back({start[i], end[i], i + 1});
    }

     sort(meetings.begin(), meetings.end(), [](auto &a, auto &b) { return a.end < b.end; });

         int count = 0, lastEnd = -1;
         vector<int> order;


       for (auto &m : meetings) {
        if (m.start >= lastEnd) {
            count++;
            lastEnd = m.end;
            order.push_back(m.index);
        }
    }

    cout << "Maximum meetings you can attend: " << count << endl;
    cout << "Order: ";
    for (int id : order) cout << id << " ";
return 0;
}