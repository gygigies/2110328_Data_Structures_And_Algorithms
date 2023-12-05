#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  size_t Size = mSize;
  size_t Front = mFront;
    if ( pos == 0 ) {
      push(mData[(Front)%mCap]);
      pop();
      return;
    }
    else {
      for ( size_t i = Size-1; i >= pos ; i--) {  
            std::swap( mData[(i+Front)%mCap] , mData[(pos+Front)%mCap])  ;  
        }
          
    }
   
}

#endif
