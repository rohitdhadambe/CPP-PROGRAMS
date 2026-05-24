#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class Solution {
public:

    struct Node {
        string state;
        int dist;
    };

    // Encode cube into 24-char string
    string encode(vector<vector<char>>& f,
                  vector<vector<char>>& b,
                  vector<vector<char>>& l,
                  vector<vector<char>>& r,
                  vector<vector<char>>& t,
                  vector<vector<char>>& d) {

        string s;
        vector<vector<vector<char>>> faces = {f, b, l, r, t, d};

        for (auto &face : faces)
            for (auto &row : face)
                for (char c : row)
                    s.push_back(c);

        return s;
    }

    bool isSolved(const string &s) {
        for (int i = 0; i < 24; i += 4) {
            for (int j = i + 1; j < i + 4; j++) {
                if (s[j] != s[i]) return false;
            }
        }
        return true;
    }

    bool isValid(const string &s) {
        unordered_map<char,int> mp;
        for (char c : s) mp[c]++;

        vector<char> colors = {'W','Y','R','O','G','B'};
        for (char c : colors) {
            if (mp[c] != 4) return false;
        }
        return true;
    }

    void rotateFace(string &s, int st) {
        char a = s[st], b = s[st+1], c = s[st+2], d = s[st+3];
        s[st] = c;
        s[st+1] = a;
        s[st+2] = d;
        s[st+3] = b;
    }

    string F(string s) {
        rotateFace(s, 0);

        char t1 = s[18], t2 = s[19];

        s[18] = s[10];
        s[19] = s[8];

        s[10] = s[21];
        s[8]  = s[20];

        s[21] = s[13];
        s[20] = s[15];

        s[13] = t1;
        s[15] = t2;

        return s;
    }

    string B(string s) {
        rotateFace(s, 4);

        char t1 = s[16], t2 = s[17];

        s[16] = s[12];
        s[17] = s[14];

        s[12] = s[23];
        s[14] = s[22];

        s[23] = s[11];
        s[22] = s[9];

        s[11] = t1;
        s[9]  = t2;

        return s;
    }

    string L(string s) {
        rotateFace(s, 8);

        char t1 = s[16], t2 = s[18];

        s[16] = s[4];
        s[18] = s[6];

        s[4] = s[20];
        s[6] = s[22];

        s[20] = s[0];
        s[22] = s[2];

        s[0] = t1;
        s[2] = t2;

        return s;
    }

    string R(string s) {
        rotateFace(s, 12);

        char t1 = s[17], t2 = s[19];

        s[17] = s[1];
        s[19] = s[3];

        s[1] = s[21];
        s[3] = s[23];

        s[21] = s[5];
        s[23] = s[7];

        s[5] = t1;
        s[7] = t2;

        return s;
    }

    string U(string s) {
        rotateFace(s, 16);

        char a = s[0], b = s[1];

        s[0] = s[12];
        s[1] = s[13];

        s[12] = s[4];
        s[13] = s[5];

        s[4] = s[8];
        s[5] = s[9];

        s[8] = a;
        s[9] = b;

        return s;
    }

    string D(string s) {
        rotateFace(s, 20);

        char a = s[2], b = s[3];

        s[2] = s[10];
        s[3] = s[11];

        s[10] = s[6];
        s[11] = s[7];

        s[6] = s[14];
        s[7] = s[15];

        s[14] = a;
        s[15] = b;

        return s;
    }

    int minMovesToSolveCube(vector<vector<char>>& f,
                            vector<vector<char>>& b,
                            vector<vector<char>>& l,
                            vector<vector<char>>& r,
                            vector<vector<char>>& t,
                            vector<vector<char>>& d) {

        string start = encode(f,b,l,r,t,d);

        if (!isValid(start)) return -1;

        queue<Node> q;
        unordered_set<string> vis;

        q.push(Node{start, 0});
        vis.insert(start);

        while (!q.empty()) {

            Node cur = q.front();
            q.pop();

            if (isSolved(cur.state))
                return cur.dist;

            vector<string> nxt = {
                F(cur.state),
                B(cur.state),
                L(cur.state),
                R(cur.state),
                U(cur.state),
                D(cur.state)
            };

            for (auto &s : nxt) {
                if (!vis.count(s)) {
                    vis.insert(s);
                    q.push(Node{s, cur.dist + 1});
                }
            }
        }

        return -1;
    }
};

int main() {
    Solution sol;

    // Example dummy input (already solved cube)
vector<vector<char>> f = {{'W','R'},{'W','W'}};
vector<vector<char>> b = {{'Y','Y'},{'Y','Y'}};
vector<vector<char>> l = {{'R','R'},{'R','R'}};
vector<vector<char>> r = {{'O','O'},{'O','O'}};
vector<vector<char>> t = {{'G','G'},{'G','G'}};
vector<vector<char>> d = {{'B','B'},{'B','B'}};

    cout << sol.minMovesToSolveCube(f,b,l,r,t,d) << endl;

    return 0;
}
