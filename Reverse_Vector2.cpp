#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v, vector<int>::iterator a, vector<int>::iterator b){
    vector <int> output;
    for ( auto itr  = v.begin(); itr < a; itr++ ) {
        output.push_back(*itr);
    }
    auto b2 = b;
    while (a!=b) {
        output.push_back(*(--b));
    }
    for ( auto itr  = b2; itr < v.end(); itr++ ) {
        output.push_back(*itr);
    }
    v = output;

   
   
   
    // b--;
    // while ( b > a) {
    //     int temp = *a;
    //     *(a++) = *b;
    //     *(b--) = temp; 
    // }
}

int main() {
    // read input
    int n, a, b;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        v.push_back(c);
    }
    cin >> a >> b;
    // call function
    reverse(v, v.begin() + a, v.begin() + b + 1);
    // display content of the vector
    for (auto &x : v){
        cout << x << " ";
    }
    cout << endl;
}