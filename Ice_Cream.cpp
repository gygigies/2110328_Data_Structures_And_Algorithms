#include <bits/stdc++.h>
using namespace std;
int main() {
    
    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(0);

    int n, m, start, s, a, P, x;
    cin >> n >> m >> start;
    vector < int > money;
    int xmax = 100001;
    while (xmax--) {
         money.push_back(0);
    }
    money[0] = start;
    while ( n--) {
        cin >> a >> s;
        money[a]=s;
    }

    int temp = start;
    for ( int i = 1; i < 100001; i++ ) {
        if ( money[i] == 0 ) {
            money[i] = money[i-1] + temp; 
        }
        else {
            temp = money[i];
            money[i] = money[i-1] + temp;
        }
    }
  
    while ( m-- ) {
        cin >> P >> x;
        if ( money[x] < P ) {
           int lucky = money[x] + P ;
           auto it3 = lower_bound ( money.begin(), money.end(), lucky );
            cout<< (it3)-money.begin() << " " ;
        } 
        else {
            auto itr = lower_bound ( money.begin(), money.end(), P );
            cout<< (itr)-money.begin() << " " ;
        }
    }
}

