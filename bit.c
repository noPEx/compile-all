#include <stdio.h>

int main( ) {
	unsigned char ch1 = 'z',ch2 ;
	ch2 = ( ch1^=1) & ( ch1 |= 0) ^ ( ch1 << 1 ) ;

	printf("%d\n",ch2 ) ;
	return 0 ;

}
