#include <stdio.h>
int memo[100]={1,1};
int fibo(int n){
	if (n < 2) return n;
	if(memo[n] != 0)
    {
        return memo[n];
    }
	else
	{
		memo[n] = fibo(n-1) + fibo(n-2);
		return memo[n];
	}
}

int main(){
    for(int i=1; i<=10; i++)
    {
        printf("%d\n", fibo(i));
    }
	return 0;
}