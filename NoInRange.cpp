// 



#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

string convert(int i) {
    stack<string> st;
    string res;

    while (i != 0) {
        int rem = i % 2;
        i = i / 2;
        st.push(to_string(rem));
    }

    while (!st.empty()) {
        res += st.top();
        st.pop();
    }

    return res;
}

int main() {
    vector<string> v1;
    int L = 10, R = 20, k = 3;

    for (int i = L; i <= R; i++) {
        string S = convert(i);
        v1.push_back(S);
    }

    int count = 0;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i].find("101") != -1) {
            count++;
        }
    }

    if (count < k) {
        cout << -1;
    } else {
        int num = stoi(v1[k],0,2);  //decimal conversion
        cout<<num;
       
    }

    return 0;
}
