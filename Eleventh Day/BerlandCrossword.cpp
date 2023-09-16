#include <bits/stdc++.h>
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
using namespace std;

typedef unsigned long long llu;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<int, pii> piii;
typedef pair<string, int> psi;
typedef pair<char, int> pci;
typedef pair<int, char> pic;
const int MOD = 1e9 + 7;
const long double PI = 3.141592653589793238462643383279502884197;

int u,r,d,l;


int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        int n;
        scanf("%d %d %d %d %d", &n, &u, &r, &d, &l);

        int flag = 0;
        for (int ul = 0; ul < 2 && !flag; ul++)
            for (int ur = 0; ur < 2 && !flag; ur++)
                for (int dl = 0; dl < 2 && !flag; dl++)
                    for (int dr = 0; dr < 2 && !flag; dr++) {
                        int uu = u,rr = r,dd = d,ll = l;
                        uu -= ul;
                        uu -= ur;
                        dd -= dl;
                        dd -= dr;
                        rr -= ur;
                        rr -= dr;

                        ll -= dl;
                        ll -= ul;

                        if (uu >= 0 && dd >= 0 && ll >= 0 && rr >= 0) {
                            if (uu <= n - 2 && dd <= n - 2 && ll <= n - 2 && rr <= n - 2)
                                flag = 1;
                        }
                    }

        printf("%s\n", flag ? "YES" : "NO");
    }
}

// author: rdd6584