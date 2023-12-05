#include <bits/stdc++.h>
using namespace std;
int main() {
     ios_base::sync_with_stdio(false); cin.tie(0);

     long long int n, m , father ,son,A ,B;
     cin >> n >> m;   
     unordered_map < long long int , long long int > input;
     while ( n-- ) {
        cin >> father >> son ;
        input [son] = father;
     }

     
    while ( m-- ) {
        cin >> A;
        cin >> B;
        if ( A == B ) {
            cout << "NO" << endl;
            continue;
            }
        if ( input.find(A) != input.end()) {
            if ( input.find(B) != input.end()) {
                if (input[input[B]] == input[input[A]] && input[input[B]] != 0 ) {
                    
                    cout << "YES" << endl;
                    continue;
                }
                else {
                    cout << "NO" << endl;
                    continue;
                }
                
            }
            else {
                cout << "NO" << endl ;
                continue;
            }
        }
        else {
            cout << "NO"<< endl;
            continue;
        }
        


    }
   
    }