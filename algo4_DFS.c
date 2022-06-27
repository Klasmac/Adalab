#include<stdio.h>
#include<stdlib.h>

void DFS(int A[10][10],int i,int n,int visited[10])
 {
   int j;
   printf("%d  ",i);   
   visited[i]=1;
   for(int j=0;j<n;j++)
    {
       if(A[i][j]==1 && !visited[j])
         DFS(A,j,n,visited);
    }
 }




int main()
{ 
   int A[10][10],n,visited[10];
   printf("Enter no. of vertices\n");
   scanf("%d",&n);
  
   printf("Enter the adjecent matrix\n");
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
      }
      visited[i]=0;
      }
   
   DFS(A,0,n,visited)  ;
   return 0;
   
}