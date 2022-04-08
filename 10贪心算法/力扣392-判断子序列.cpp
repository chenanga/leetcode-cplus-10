#include<iostream>


using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {

        //²»ÄÜÅÅĞò
        int si = 0, ti = 0;
        int res = 0;

        while (si < s.size() && ti < t.size()) {

            if (s[si] == t[ti]) {
                res++;
                si++;
                ti++;
            }
            else {
                ti++;
            }
        }

        return res == s.size();

    }
};

int main() {

	system("pause");
	return 0;
}