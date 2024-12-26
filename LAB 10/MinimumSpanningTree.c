#include <stdio.h>
#include <stdlib.h>
#define MAX 10

typedef struct{
    int u, v, weight;
} Edge;

Edge edges[MAX];
int parent[MAX];

int find(int i){
    while (parent[i] != i)
        i = parent[i];
    return i;
}

void unionSets(int i, int j){
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}

int compare(const void *a, const void *b){
    Edge *edgeA = (Edge *)a;
    Edge *edgeB = (Edge *)b;
    return edgeA->weight - edgeB->weight;
}

void kruskal(int edgesCount, int vertices){
    qsort(edges, edgesCount, sizeof(Edge), compare);
    for (int i = 0; i < vertices; i++)
        parent[i] = i;
    printf("Edges in Minimum Spanning Tree:\n");
    int minCost = 0;
    for (int i = 0; i < edgesCount; i++){
        if (find(edges[i].u) != find(edges[i].v)){
            printf("%d-- %d == %d\n", edges[i].u, edges[i].v,
                   edges[i].weight);
            minCost += edges[i].weight;
            unionSets(edges[i].u, edges[i].v);
        }
    }
    printf("Minimum Cost: %d\n", minCost);
}

int main(){
    int vertices, edgesCount;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    
    printf("Enter the number of edges: ");
    scanf("%d", &edgesCount);
    
    printf("Enter edges (u v weight):\n");
    for (int i = 0; i < edgesCount; i++){
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].weight);
    }
    kruskal(edgesCount, vertices);
    
    return 0;
}