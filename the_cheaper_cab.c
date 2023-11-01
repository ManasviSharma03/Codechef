#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d", &T);
	while(T--){
	int X, Y;
	scanf("%d%d", &X, &Y);
	if(X<Y)
	{
	    printf("\nFIRST");
	}
	else if(X>Y)
	{
	    printf("\nSECOND");
	}
	else
	{
	    printf("\nANY");
	}
	
 }
    return 0;	
}

