#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  std::vector <T> keep;
  for ( size_t i = 0; i<=pos; i++) {
    if ( i == pos) {
      keep.push_back(value);
    }
    if (mSize!=0) {
      T num = top();
      keep.push_back(num);
      pop();
    }
    
  }
  for ( int i = keep.size()-1; i>=0; i--){ 
       push(keep[i]); 
    }



}

#endif
