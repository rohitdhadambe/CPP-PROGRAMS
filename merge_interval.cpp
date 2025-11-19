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
    int n=6;
    vector<Meeting> meetings;

     for (int i = 0; i < n; i++) {
        meetings.push_back({start[i], end[i], i + 1});
    }
   
    cout << "Index\tStart\tEnd" << endl;
    for (auto &m : meetings) {
        cout << m.index << "\t" << m.start << "\t" << m.end << endl;
    }
    cout << endl;

    //sort(meetings.begin(), meetings.end(), [](auto &a, auto &b) { return a.end < b.end; });
   

    vector<Meeting> merged;
    merged.push_back(meetings[0]);

    for (int i = 1; i < meetings.size(); i++) {
        if(meetings[i].start<= merged.back().end){ //last metting in the merged
           merged.back().end = max( merged.back().end , meetings[i].end);
        }
        else{
                merged.push_back(meetings[i]);
        }
    }
    meetings = merged;

        cout<<" merge overlapping interval";
        cout << "\nIndex\tStart\tEnd" << endl;
    for (auto &m : meetings) {
        cout << m.index << "\t" << m.start << "\t" << m.end << endl;
    }
    cout << endl;

return 0;
}