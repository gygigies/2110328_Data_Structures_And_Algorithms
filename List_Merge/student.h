#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  for (auto itr = ls.begin(); itr!=ls.end(); ++itr) {
    if (!itr->empty()) {
      mSize+=itr->mSize;
      itr->mHeader->prev->next = mHeader;
      itr->mHeader->next->prev = mHeader->prev;
      mHeader->prev->next = itr->mHeader->next;
      mHeader->prev = itr->mHeader->prev;

      itr->mHeader->prev = itr->mHeader;
      itr->mHeader->next = itr->mHeader;
      itr->mSize=0;
    }
    
  itr->clear();
  
  
} 
}

#endif


