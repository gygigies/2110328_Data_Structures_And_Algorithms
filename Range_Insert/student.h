#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  // size_t dis = last - first;
  // size_t pos = position - begin() ;
  //  ensureCapacity(mSize + dis);

  // for ( size_t i = pos; i<mSize; i++) {
  //     mData[i+dis] = mData[i] ;
  // }

  // for ( size_t i = pos; i<pos+dis; i++ ) {
  //     if ( first != last) {
  //       mData[i] = (*first);
  //     }
  //     first++;
      
  // }
  for ( auto it = first; it<last; it++ ) {
    position = insert( position , (*it) );
    position++;
  }

  // mSize = mSize + dis;




}

#endif
