#include<stdio.h>
int main()
{
    long long int n,k,t;
	scanf("%lld",&t);
	while(t--)
	{
   		scanf("%lld",&n);
    	k=n%9;
    	if(k==0)
        	printf("%d\n",9);
    	else
        	printf("%d\n",k);
	}
    return 0;

}
