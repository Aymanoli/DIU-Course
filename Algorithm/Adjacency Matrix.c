#include<stdio.h>
int no_vertices;
void printGraph(int adj[no_vertices][no_vertices])
{
   for(int i=0;i<no_vertices;i++)
    {
        for(int j=0;j<no_vertices;j++)
        {
            printf(" %d ",adj[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int src,des;
    printf("Enter number of vertices: ");
    scanf("%d", &no_vertices);

    int adj[no_vertices][no_vertices];
    for(int i=0;i<no_vertices;i++)
    {
        for(int j=0;j<no_vertices;j++)
        {
            adj[i][j] = 0;
        }
    }
    while(src!=-1 && des!=-1)
    {
        printf("Enter an edge from(0-%d) to node (0-%d): ",no_vertices, no_vertices);
        scanf("%d %d",&src,&des);
        adj[src][des]=1;
        adj[des][src]=1;
    }
    printf("The adjacency matrix is: \n");
    printGraph(adj);

}
