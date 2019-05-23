#include <stdio.h>

int visited[10],n,a[10][10];

void dfs(int index)
{
    int i;
    printf("%c -> ",'A'+index);
    visited[index]=1;
    for(i=0;i<n;i++)
    {
        if(a[index][i]==1 && !visited[i])
            dfs(i);
    }
}

int main(void) 
{
	int i,j;
	printf("Enter no. of vertices: ");
	scanf("%d",&n);
	
	printf("Enter Adjacency Matrix:\n");
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&a[i][j]);
	    }
	}
	dfs(0);
	return 0;
}

