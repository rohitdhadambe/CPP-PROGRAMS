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
    int start[] = {1,3,5,6,8,12};
    int end[]   = {2,4,8,7,10,16};
    int n = 6;
    pair<int,int>p1 = {7,8};

    vector<Meeting> meetings;

     for (int i = 0; i < n; i++) {
        meetings.push_back({start[i], end[i], i + 1});
    }

    cout << "All Meetings:" << endl;
    cout << "Index\tStart\tEnd" << endl;
    for (auto &m : meetings) {
        cout << m.index << "\t" << m.start << "\t" << m.end << endl;
    }
    cout << endl;

     sort(meetings.begin(), meetings.end(), [](auto &a, auto &b) { return a.end < b.end; });

    cout << "Meetings After Sorting by End Time:" << endl;
    cout << "Index\tStart\tEnd" << endl;
    for (auto &m : meetings) {
        cout << m.index << "\t" << m.start << "\t" << m.end << endl;
    }
    cout << endl;

    cout << "Meetings After Inserting Interval:" << endl;

    int pos = 0;
for (int i = 0; i < meetings.size(); i++) {
    if (p1.second <= meetings[i].end) {
        pos = i;
        break;
    }
    pos = i + 1;
}

// Insert at that position
meetings.insert(meetings.begin() + pos, {p1.first, p1.second});


    cout << "Index\tStart\tEnd" << endl;
    for (auto &m : meetings) {
        cout << m.index << "\t" << m.start << "\t" << m.end << endl;
    }
    cout << endl;

return 0;
}