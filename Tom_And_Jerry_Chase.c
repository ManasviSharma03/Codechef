#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d", &T);
	while(T--){
	int x, y;
	scanf("%d%d", &x, &y);
	if(y>x)
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

