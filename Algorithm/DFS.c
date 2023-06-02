/*
#include<stdio.h>
#include<stdlib.h>

void DFS(char node, int visited[], char adj[][200]) {
	visited[node] = 1;
	printf("%c ", node);
	for (int i = 0; adj[node][i] != '\0'; i++) {
		if (!visited[adj[node][i]])
			DFS(adj[node][i], visited, adj);
	}
}

int main() {
	int node, edge;
	scanf("%d %d", &node, &edge);
	int visited[200] = {0};
	char adj[200][200];
	fflush(stdin);
	while (edge--) {
		char x, y;
		scanf(" %c %c", &x, &y);
		adj[x][0] = y;
		adj[y][0] = x;
	}
	fflush(stdin);
	printf("Starting node: ");
	char start;
	scanf(" %c", &start);
	DFS(start, visited, adj);
	printf("\n");
	return 0;
}
*/

#include <stdbool.h>
#include <stdio.h>

#define MAX_NODES 200

void DFS(char node, bool visited[], char adj[][MAX_NODES]) {
    visited[node] = true;
    if (node >= 'A' && node <= 'z')
        printf("%c ", node);
    for (int i = 0; adj[node][i] != '\0'; i++) {
        char it = adj[node][i];
        if (!visited[it])
            DFS(it, visited, adj);
    }
}

int main() {
    int node, edge;
    printf("Enter the number of nodes: ");
    scanf("%d", &node);
    printf("Enter the number of edges: ");
    scanf("%d", &edge);
    bool visited[MAX_NODES] = {false};
    char adj[MAX_NODES][MAX_NODES] = {{0}};
    getchar();
    printf("Enter the edge: \n");
    while (edge--) {
        char x, y;
        scanf("%c %c", &x, &y);
        adj[x][0]++;
        adj[x][adj[x][0]] = y;
        adj[y][0]++;
        adj[y][adj[y][0]] = x;
        getchar();
    }
    printf("Starting node: ");
    char start;
    scanf(" %c", &start);
    DFS(start, visited, adj);
    printf("\n");
    return 0;
}
