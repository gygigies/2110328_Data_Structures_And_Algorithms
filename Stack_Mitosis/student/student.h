#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <vector>

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    int countt = 0; int i = 0;
    std ::vector <T> keep;
    for ( size_t i =0; i<=b; i++) {
        T topp = top();
        keep.push_back(topp);
        if ( i >= a && i<=b ) {
            keep.push_back(topp);
            countt++;
        }
        pop();
    }

    for ( int i = keep.size()-1; i>=0; i--){ 
       push(keep[i]); 
    }
}

#endif