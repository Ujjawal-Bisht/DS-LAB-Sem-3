#include <stdio.h>
#define MAX 10

void displayMatrix(int matrix[MAX][MAX], int vertices){
    printf("\nAdjacency Matrix:\n");
    for (int i = 0; i < vertices; i++){
        for (int j = 0; j < vertices; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int vertices, edges, u, v;
    int adjacencyMatrix[MAX][MAX] = {0};

    printf("Enter the number of vertices (max %d): ", MAX);
    scanf("%d", &vertices);

    if (vertices <= 0 || vertices > MAX){
        printf("Invalid number of vertices. Exiting.\n");
        return 1;
    }
    printf("Enter the number of edges: ");
    scanf("%d", &edges);
    if (edges < 0){
        printf("Invalid number of edges. Exiting.\n");
        return 1;
    }
    for (int i = 0; i < edges; i++){
        printf("Enter edge %d (format: u v): ", i + 1);
        scanf("%d %d", &u, &v);
        if (u < 0 || u >= vertices || v < 0 || v >= vertices){
            printf("Invalid edge (%d, %d). Vertices must be between 0 and %d.\n", u, v, vertices- 1);
            i--;
            continue;
        }
        adjacencyMatrix[u][v] = 1;
        adjacencyMatrix[v][u] = 1;
    }
    displayMatrix(adjacencyMatrix, vertices);
    return 0;
}