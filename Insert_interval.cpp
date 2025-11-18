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
    int start[] = {5, 3, 1, 9};
    int end[]   = {6, 4, 2, 10};
    int n = 4;
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

   for(auto&m : meetings){
      if (m.end < p1.first && p1.second<m.start) {
            //insert that pair in the meeting
        }
   }
    
return 0;
}