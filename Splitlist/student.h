void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
  if ( mSize != 0) {
     int size = mSize;
  node* A = mHeader; node* B = mHeader;
  int b = mSize/2;
  int a = size - b;
  while( a-- ) {A = A->next;}
  B = A->next;
  
  list1.mSize += a;
  list1.mHeader->prev->next = mHeader->next;
  list1.mHeader->prev = A;
  mHeader->next->prev = list1.mHeader->prev;
  A->next = list1.mHeader;

  mHeader->next = B;
  B->prev = mHeader;

  list2.mSize += b;

  mHeader->next->prev = list2.mHeader->prev;
  list2.mHeader->prev->next = mHeader->next;
  list2.mHeader->prev = mHeader->prev;
  mHeader->prev->next = list2.mHeader;

  mHeader->next = mHeader;
  mHeader->prev = mHeader;
  mSize=0;
  }
 

  



 
    
}
