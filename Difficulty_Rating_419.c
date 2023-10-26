#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d", &T);
	while(T--){
	int N, X;
	scanf("%d%d", &N, &X);
	if(X >= (N+1)/2)
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

