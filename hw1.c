#include <stdio.h>
#include <stdlib.h>

int main(){
   int count = 0, ten, unit;
   while( count < 100 ){
   	ten = count / 10;
	unit = count % 10;
	if( ten * unit == 0 ){
		if( ten == 0 ){
			printf(" %d ", unit ); 
		}
		else
			printf(" %d ", ten );
	}
	else{
		if( ten * unit < 10 ){
			printf(" %d ", unit * ten );
		}
		else{
			printf("%d ", unit *ten );
	
		}
	}
	if( unit == 9 ){
		printf("\n");
	}
   	++count;
   }
}
