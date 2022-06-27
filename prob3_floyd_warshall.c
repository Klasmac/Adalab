#include<stdio.h>
#define INF 999999


void printSolution(int dist[10][10],int n) {
  int i,j;
  printf("Mattrix represents shortest distance b/w every pair of vertices\n");
    for(i=0;i<n;i++)
      {
       for(j=0;j<n;j++)
           {
               
                if(dist[i][j]==INF)
                    printf("%7s","INF");
                else 
                   printf("%7d",dist[i][j]);    

           }
        printf("\n");
      }
 }

void floydwarsall(int graph[10][10],int n)
{
   int dist[10][10],i,j,k;
   for(i=0;i<n;i++)
      for(j=0;j<n;j++)
         dist[i][j]=graph[i][j];


   for(k=0;k<n;k++){
    for(i=0;i<n;i++){
      for(j=0;j<n;j++)
      {
         if(dist[i][j]>dist[i][k]+dist[k][j])
            dist[i][j]=dist[i][k]+dist[k][j];

      }
    }
  }   

  printSolution(dist,n)      ;
  
}

int main()
{
   int  graph[10][10]={
    0
     }, n,i,j;
  
   printf("Enter the no of vertices\n");
     scanf("%d",&n);

  

  printf("Enter 2d array\n");
   for( i=0;i<n;i++){
     for( j=0;j<n;j++)
       {
         scanf("%d",&graph[i][j]);
          if(graph[i][j]==9999)
                   graph[i][j]=INF;  
       }  
   }

  
   floydwarsall(graph,n);
   return 0;
}


