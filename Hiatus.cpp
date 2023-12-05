#include <bits/stdc++.h>
using namespace std;
int main() {
    int n , m , year , month , a , b ;
    cin >> n >> m;
    vector < pair < int , int> > input;
    while ( n-- ) {
        cin >> year >> month ;
        input.push_back(make_pair(year , month ));
    }
    vector < pair < int , int> > input2 = input;
    sort (input2.begin() , input2.end());
    while (m--) {
        cin >> a >> b ;
        pair < int , int > check = make_pair( a , b );
        auto itr = upper_bound( input2.begin() , input2.end() , check );
        auto itr2 = input2.begin();
        auto it1 = itr ; it1--;
        itr--;

        if ( check == *it1 ) {
            cout << "0 0 " ;
        }
        else if (check < *itr2 ) {
            cout << "-1 -1 " ;
        }
        else {
            cout << (*itr).first << " " << (*itr).second << ' ' ;
        }
    }

}
