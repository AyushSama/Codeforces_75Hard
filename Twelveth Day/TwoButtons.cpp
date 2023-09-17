#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <math.h>


using namespace std;

int n, m;
int main() {
    cin >> n >> m;

    int ans = 0;
    while (m != n) {
        if (m > n and m % 2 == 0) {
            m /= 2;
            ans++;
        }
        else {
            m++;
            ans++;
        }
    }

    cout << ans;
}
