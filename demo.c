#include<stdio.h>
void createMatrix(int m[10][10],int n)
{
    int i,j;
    char ans;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        m[i][j]=0;
        if(i!=j)
        {
            printf("\n enter the cost of edge between %d and %d: ",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
}
void displaymatrix(int m[10][10],int n)
{
    int j,i;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%5d",m[i][j]);
        }
        printf("\n");
    }
} 
void main()
{
    int a,b,u,v,i,j,e;
    int visited[10]={0},min,mincost=0;
    int m[10][10],n;
    printf("\n how many vertices: ");
    scanf("%d",&n);
    createMatrix(m,n);
    displaymatrix(m,n);

    visited[0]=1;
    printf("\n");
    for(e=0;e<n;e++)
    {
        for(i=0,min=999;i<n;i++)
        {
            if(m[i][j]==0)
            m[i][j]=999;
            if (m[i][j]<min)
            if (visited[i]!=0)
            {
                min=m[i][j];
                a=u=i;
                b=v=j;
            }
        }
        if(visited[u]==0 || visited[v]==0)
        {
            printf("\n egde %d:(%d%d)cost:%d",e+1,a+1,b+1,min);
            mincost+=min;
            visited[b]=1;
        }
        m[a][b]=m[b][a]=999;       
    }
    printf("\n minimum cost=%d",mincost);
}