// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    int transform(string a, string b)
    {
        int n = a.size();
        int m = b.size();

        string g = a;

        string h = b;
        sort(g.begin(), g.end());
        sort(h.begin(), h.end());

        if (g != h)
        {
            return -1;
        }

        int i = a.size() - 1;
        int j = b.size() - 1;

        int cnt = 0;
        while (i >= 0 and j >= 0)
        {
            if (a[i] == b[j])
            {
                i--;
                j--;
            }
            else
            {
                cnt++;
                i--;
            }
        }

        return cnt;
    }
};
