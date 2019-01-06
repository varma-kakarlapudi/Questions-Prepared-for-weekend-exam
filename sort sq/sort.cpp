#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,k,l,s=0;
    scanf("%lld %lld",&n,&m);
    l= (m-n)/2;
    long long int arr[l];
    arr[0]=-1;
    while(l--){
    	arr[l]=-1;
	}
    for(int i=1;i<=(m/3);i++)
    {
        k=i*i;
        if(k>m)
            break;
        
        if(k >=n  && k<=m){
        
            arr[s]=k;
            s++;
        }
    }
    for(int i=0; i<=(m/2);i++)
    {
        k=i*i*i;
        if(k>m)
            break;
        
        if(k >=n  && k<=m){
            arr[s]=k;
        }
    
    }
    if(arr[0]==0)
        printf("-1");
    else{
    	sort(arr[0],arr[0]+s);
    	for(int j=0;j<=s;j++)
    		printf("%d ",arr[j]);
	}
	
    
}
