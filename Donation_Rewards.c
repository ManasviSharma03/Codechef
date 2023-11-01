#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d", &T);
	while(T--){
	int X;
	scanf("%d", &X);
	if(X<=3)
	{
	    printf("\nBRONZE");
	}
    if(X>3 && X<=6)
    {
        printf("\nSILVER");
    }
    else if(X>6)
	{
	    printf("\nGOLD");
	}
	
  }
  return 0;
}

