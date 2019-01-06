#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,k,s;
    scanf("%d",&t);
    while(t--){
	
    scanf("%d %d",&n,&i);
    s=(n & (1<<i)) ;
    if(s == 0)
    {
        k=n+pow(2,i);
        
        printf("%d\n",k);
    }
    else
	{
        k=n-pow(2,i);
        printf("%d\n",k);
    }
	}
	return 0;
    
}

