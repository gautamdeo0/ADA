#include<stdio.h>
#include<stdlib.h>

void knapsack(int w[20],int v[50],int p[50], int n)
{
  int table[20][20];
  int i,j;
  for(i=0;i<=n;i++)
  {
    v[i,0]=0;
  }
  for(j=0;j<=w;j++)
  {
    v[0,j]=0;
  }
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=w;j++)
    {
      if((j-w[i])>=0 && (v[(i-1),(j-w[i])]+p[i])>v[(i-1),j])
      {
        return (v[(i-1),(j-w[i])]+p[i]);
      }
      else{
        return v[(i-1),j];
      }
    }
  }
}