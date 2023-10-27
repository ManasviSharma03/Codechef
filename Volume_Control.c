#include <stdio.h>

int main(void) {
	// your code goes here
	int x;
	scanf("%d",&x);
	while(x--)
	{
	    int p,q;
	    scanf("%d %d\n",&p,&q);
	    if(p>q){
	        printf("%d\n",p-q);
	    }
	    else{
	        printf("%d\n",q-p);
	    }
	    
	}
	return 0;
}
