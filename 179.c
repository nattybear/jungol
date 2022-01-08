#include <stdio.h>

int sort(int a, int *b)
{
	int i = 0, o = 0, p = 0;
	
	for (i = 0; i < a; i++) {
		for (o = i; o < a; o++) {
			if(b[i] < b[o]){
				p = b[i];
				b[i] = b[o];
				b[o] = p;
	       }
 		}
	}
 
	for (i = 0; i < a; i++) {
		printf("%d ", b[i]);
}
 

	return 1;
}

int main(void)
{
	int b[15] = {0,};
	int i = 0, o = 0;
	
	scanf("%d ", &o);

	for(i = 0; i < o; i++){
		scanf("%d ", &b[i]);
	}
	sort(o, &b[0]);
	puts("");
	return 0;
}
