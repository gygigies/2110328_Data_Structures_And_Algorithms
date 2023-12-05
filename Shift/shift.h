void shift(int k) {
	// TODO: Add your code here
	if ( k < 0) {
		k = mSize+k ;
		while ( k<0 ) {
			k = mSize+k ;
		}
	}

	long long r = k % mSize;
	
	for (int i = 0; i < r; ++i) {

		mHeader->prev->next = mHeader->next;
		mHeader->next->prev = mHeader->prev;
		mHeader->next = mHeader->next->next;
		mHeader->prev = mHeader->prev->next;
		mHeader->next->prev =  mHeader ;
		mHeader->prev->next = mHeader;


	}
	
		
}
	

	

