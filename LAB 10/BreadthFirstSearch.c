#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int queue[MAX], front = -1, rear = -1;

void enqueue(int v){
    if (rear == MAX - 1)
        return;
    if (front == -1)
        front = 0;
    queue[++rear] = v;
}

int dequeue(){
    if (front == -1 || front > rear)
        return -1;
    return queue[front++];
}

int isQueueEmpty(){
    return front == -1 || front > rear;
}

void bfs(int graph[MAX][MAX], int visited[MAX], int start, int vertices){
    enqueue(start);
    visited[start] = 1;
    while (!isQueueEmpty()){
        int current = dequeue();
        printf("%d ", current);
        for (int i = 0; i < vertices; i++){
            if (graph[current][i] == 1 && !visited[i]){
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main(){
    int vertices, edges, u, v;
    int graph[MAX][MAX] = {0}, visited[MAX] = {0};

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges (u v):\n");
    for (int i = 0; i < edges; i++){
        scanf("%d %d", &u, &v);
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    printf("Enter the starting vertex for BFS: ");
    scanf("%d", &u);

    printf("BFS Traversal: ");
    bfs(graph, visited, u, vertices);
    
    return 0;
}