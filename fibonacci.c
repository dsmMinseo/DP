#include <stdio.h>

/* top_down
int memo[100];
int fibonacci(int n){
	if (n <= 1) {
		return n;
	} 
	else {
		if (memo[n] > 0) {
			return memo[n];
		}
		memo[n] = fibonacci(n-1) + fibonacci(n-2);
		return memo[n];
	}
}
int main()
{
	int num, i;
	
	scanf("%d", &num);
	fibonacci(num);
	
	for(i=1; i<=num; ++i) {
		printf("%d ", memo[i]);
	}
} */


/* bottom_up
int d[100];
int fibonacci(int n) {
	int i;
	d[0] = 1;
	d[1] = 1;
	for(i=2; i<=n; ++i) {
		d[i] = d[i-1] + d[i-2];
	}
	return d[n];
}

int main()
{
	int num, i;
	
	scanf("%d", &num);
	fibonacci(num);
	
	for(i=0; i<=num; ++i) {
		printf("%d ", d[i]);
	}
}*/
