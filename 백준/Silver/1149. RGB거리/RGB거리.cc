#include<stdio.h>
#define MIN(x,y) (((x)<(y)) ? (x):(y))
int dp[1000][3],r,g,b;

int main()
{
	int N; // 집수
	int i;
	scanf("%d",&N);
	scanf("%d%d%d",&dp[0][0],&dp[0][1],&dp[0][2]);

	for(i=1;i<N;i++)
	{
		scanf("%d%d%d",&r,&g,&b);
		dp[i][0]=MIN(r+dp[i-1][1],r+dp[i-1][2]);
		dp[i][1]=MIN(g+dp[i-1][0],g+dp[i-1][2]);
		dp[i][2]=MIN(b+dp[i-1][0],b+dp[i-1][1]);
	}
	printf("%d\n",MIN(MIN(dp[N-1][0],dp[N-1][1]),dp[N-1][2]));
	
	return 0;
}