#include<stdio.h>
#include<algorithm>
using namespace std;

int N,M,dab[9],num[9],chk[9];

void back(int k)
{
	int i,j;
	if(k>M)
	{
		for(j=1;j<k;j++)
			printf("%d ",dab[j]);
		printf("\n");
		return ;
	}
	int t=-1;
	for(i=1;i<=N;i++)
	{
		if(chk[i]==0 && t!=num[i])
		{
			chk[i]=1;
			dab[k]=num[i];
			t=num[i];
			back(k+1);
			chk[i]=0;
		}
	}
}
int main()
{
	
	scanf("%d%d",&N,&M);
	for(int i=1;i<=N;i++)
		scanf("%d",&num[i]);

	sort(num+1,num+N+1);
	
	back(1);
	return 0;
}