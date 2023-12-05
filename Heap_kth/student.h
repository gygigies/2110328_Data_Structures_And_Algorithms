#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  T temp ;
  if ( k == 1) {
    return mData[0];
  }
  if ( k == 2){
    if ( mLess(mData[1] , mData[2])) {
      return mData[2];
    }
    else {
      return mData[1];
    }
  }
  if ( k == 3){
     if ( mLess(mData[2] ,  mData[1])) {
      temp = mData[1];
    }
    else if ( mLess(mData[1] , mData[2])) {
      temp = mData[2];
    }
    if (temp == mData[1]) {
      if ( mLess(mData[4] , mData[3]) && mLess(mData[2] , mData[3]) ) {
        return mData[3];
      }
      else if ( mLess(mData[3] , mData[4]) && mLess(mData[2] , mData[4])) {
        return mData[4];
      }
    }
    else if (temp == mData[2] ) {
        if (mLess( mData[6] , mData[5]) && mLess( mData[1] , mData[5])) {
        return mData[5];
      }
      else if ( mLess(mData[5] , mData[6]) && mLess(mData[1], mData[6])) {
        return mData[6];
      }
    }
    if(temp == mData[1])
      return mData[2];
    else
      return mData[1];
  } 
   
  
} 

#endif
