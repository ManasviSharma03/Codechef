#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d", &T);
	while(T--){
	int X, Y;
	scanf("%d%d", &X, &Y);
	if(Y<=5*X)
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

