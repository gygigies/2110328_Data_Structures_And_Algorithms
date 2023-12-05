#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  while ( a < b ) {
    std::swap(mData[(a+mFront)%mCap] , mData[(b+mFront)%mCap]);
    a++; b--;
  }
}
#endif
