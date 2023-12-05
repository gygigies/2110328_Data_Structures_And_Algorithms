#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    size_t Size = mSize;
    std::vector <T> keep;
    T temp ;
    for ( size_t i = 0; i < Size ; i++) {  
        if ( i == pos) {
           temp = front();
           pop();
        }
        else {
            keep.push_back(front()); 
            pop();
        }
    }
    push(temp);
    for ( size_t i = 0; i<keep.size(); i++) {
        push(keep[i]);
    }
}

#endif

