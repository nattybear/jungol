#include <stdio.h>

int sum(int n)
{
	if ( n >= 0 ) {
		return n + sum(n - 1);
	}
	return 0;

}

int main()
{
        int i = 0;
	scanf("%d", &i);
	printf("%d\n",sum(i));
	return 0;
}
