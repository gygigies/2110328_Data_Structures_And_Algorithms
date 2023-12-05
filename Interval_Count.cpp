#include <iostream>
#include <vector>
using namespace std;
int main() {
    long long int n , m , k , num ;
    cin >> n >> m >> k;
    
    vector <long long int> input;
    while (n--) {
        cin >> num;
        input.push_back(num);
    }

    long long int p , count ; 
    vector <long long int> output; 

    while ( m-- ) {
        cin >> p ;
        count = 0;
        
        for ( auto &u : input ) {
            if ( u >= p-k && u<= p+k) {
                count++;
            }
        }
    cout << count << " "; 

    }


}