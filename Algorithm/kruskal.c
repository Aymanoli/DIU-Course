#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 1000
#define MAX_EDGES 10000

// A structure to represent an edge in the graph
struct Edge {
    int src, dest, weight;
};

// A structure to represent a subset for union-find
struct Subset {
    int parent;
    int rank;
};

// Function prototypes
void initialize_subsets();
int find_subset(int i);
void union_subsets(int x, int y);
int compare_edges(const void *a, const void *b);
void kruskal_mst();

// Global variables
int num_nodes, num_edges;
struct Edge edges[MAX_EDGES];
struct Subset subsets[MAX_NODES];

int main() {
    // Read the number of nodes and edges
    printf("Enter the number of nodes: ");
    scanf("%d", &num_nodes);
    printf("Enter the number of edges: ");
    scanf("%d", &num_edges);

    printf("Enter: (source destination weight)\n");
    // Read the edges and their weights
    for (int i = 0; i < num_edges; i++) {
        scanf("%d%d%d", &edges[i].src, &edges[i].dest, &edges[i].weight);
    }

    // Find the minimum spanning tree using Kruskal's algorithm
    kruskal_mst();

    return 0;
}

// Initialize the subsets for union-find
void initialize_subsets() {
    for (int i = 0; i < num_nodes; i++) {
        subsets[i].parent = i;
        subsets[i].rank = 0;
    }
}

// Find the subset that i belongs to
int find_subset(int i) {
    if (subsets[i].parent != i) {
        subsets[i].parent = find_subset(subsets[i].parent);
    }
    return subsets[i].parent;
}

// Union the subsets that x and y belong to
void union_subsets(int x, int y) {
    int xroot = find_subset(x);
    int yroot = find_subset(y);

    if (subsets[xroot].rank < subsets[yroot].rank) {
        subsets[xroot].parent = yroot;
    } else if (subsets[xroot].rank > subsets[yroot].rank) {
        subsets[yroot].parent = xroot;
    } else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

// Comparison function for qsort to sort edges in ascending order of weight
int compare_edges(const void *a, const void *b) {
    struct Edge *ea = (struct Edge *)a;
    struct Edge *eb = (struct Edge *)b;
    return ea->weight - eb->weight;
}

// Find the minimum spanning tree using Kruskal's algorithm
void kruskal_mst() {
    // Initialize the subsets for union-find
    initialize_subsets();

    // Sort the edges in ascending order of weight
    qsort(edges, num_edges, sizeof(struct Edge), compare_edges);

    // Initialize variables for MST construction
    int mst_weight = 0;
    int num_mst_edges = 0;
    struct Edge mst[MAX_NODES - 1];

    // Iterate through all edges and add them to the MST if they do not form a cycle
    for (int i = 0; i < num_edges && num_mst_edges < num_nodes - 1; i++) {
        int x = find_subset(edges[i].src);
        int y = find_subset(edges[i].dest);

        if (x != y) {
            // Add the edge to the MST
            mst[num_mst_edges++] = edges[i];
            mst_weight += edges[i].weight;

            // Union the subsets that the vertices belong to
            union_subsets(x, y);
        }
    }

    // Print the MST weight and edges
    printf("Minimum spanning tree weight: %d\n", mst_weight);
    printf("Minimum spanning tree edges:\n");
    for (int i = 0; i < num_mst_edges; i++) {
        printf("%d - %d : %d\n", mst[i].src, mst[i].dest, mst[i].weight);
    }
}
