#include <iostream>
#include <set>
using namespace std;
int main() {
    set <int> input; 
    int n,num ; cin>>n;
    int N = n;
    while ( n-- ){
        cin >> num;
        input.insert(num);
    }
   
    auto it1 = input.begin(); auto it2 = input.end();
    it2--;
    if ((*it1) == 1 && (*it2) == N && input.size() == N ) {
        cout<< "YES";
    }
    else {
        cout << "NO";
    }
}