#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n , a ;
    cin >> n >> a ;
    vector <int> output;
    
    int temp = a;
    output.push_back(a);


    for ( int i = 0 ; i < output.size(); i++ ) {
        temp = output[i];
        if ( ((2*temp)  +1) < n ) {
            output.push_back((2*temp) +1);
        }
        if ( ((2*temp) +2) < n ) {
            output.push_back((2*temp) +2);
        }
        else { break;
        }

    }
    
    cout << output.size() << endl;
    for ( auto &i : output ) {
        cout << i << " " ;
    }
    


}