#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end(), greater<int>());
        sort(s.begin(), s.end(), greater<int>());

        int si = 0, gi = 0;
        int res = 0;//

        while (gi < g.size() && si < s.size()) {

            if (s[si] >= g[gi]) {//可以满足当前小朋友
                res++;
                si++;
                gi++;
            }
            else {//不能满足，找下一个小朋友
                gi++;
            }
        }
        return res;
    }
};

int main() {

	system("pause");
	return 0;
}