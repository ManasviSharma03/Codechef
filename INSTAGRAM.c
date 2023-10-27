#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d", &T);
	while(T--){
	int X, Y;
	scanf("%d%d", &X, &Y);
	if(X>10*Y)
	{
	    printf("\nYES");
	}
	else
	{
	    printf("\nNO");
	}
 }
	return 0;
}

