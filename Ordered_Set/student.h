#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;

    vector<T> input;
    for ( auto &a : A) {
        input.push_back(a);
    }
    for ( auto &b : B) {
        input.push_back(b);
    }

    vector <T> keep (100001, 0);
    
    for ( auto &u : input) {
        keep[u] += 1;
    }

    vector <T> output;
    
    for ( auto &y : input ) {
        if ( keep[y] != 0 ) {
            output.push_back(y) ;
            keep[y] = 0;
        }
    }
    
    v = output;
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;

    vector <T> keep (100001 , 0);
    
    for ( auto &a : A) {
        keep[a] += 1;
    }
    for ( auto &b : B) {
        keep[b] += 1;
    }

    for ( auto &y : A ) {
        if ( keep[y] > 1 ) {
            v.push_back(y) ;
            keep[y] = 0;
        }
    }

    return v;
}



  

