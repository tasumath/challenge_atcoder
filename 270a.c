#include<stdio.h>
#define max(p,q)((p)>(q)?(p):(q))

int dp[10010];
int a[110];
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=0;i<k;i++)scanf("%d",a+i);
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<k;j++){
			if(a[j]>i)break;
			dp[i]=max(dp[i],i-dp[i-a[j]]);
		}
	}

	printf("%d\n",dp[n]);
}