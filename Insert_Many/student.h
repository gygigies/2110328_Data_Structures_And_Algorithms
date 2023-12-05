#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>


template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  T * arr = new T[mSize+data.size()]();
  sort ( data.begin() , data.end()) ; 
  
  int count = 0;
  for (size_t i = 0; i<data.size(); i++)  {
        int l = data[i].first+count ;
        arr[l] = data[i].second;
        count++;
  }
  int m = 0;
  for (size_t i = 0; i<mSize+data.size(); i++) {
    
    if ( arr[i] == 0 || arr[i] == '0') {
      arr[i] = mData[m];
      m++;
    }
  }
    
    
    
    delete [] mData;
    mSize += data.size() ;
    mData = arr;
    




    mData = arr;
    mCap = mSize;

}
#endif





// sort ( data.begin() , data.end() );
// int count = 0 ;
// for ( size_t i = 0 ; i <data.size() ; i++ ) {
//     auto it =  data[i].first + count + begin();
//     it = insert ( it , ( data[i].second ));
//     count++;
//   } 