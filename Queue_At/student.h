#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
  //write something here
  if ( idx < 0 ) {
    return (mData[(idx + mFront + mSize)%mCap]);
  }
  else {
    return ( mData[(idx + mFront)%mCap]);
  }
  // you need to return something
}

#endif
