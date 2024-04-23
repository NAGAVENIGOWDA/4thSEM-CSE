#include <stdio.h> 
#include <stdlib.h>

void solution(int src, int n, int adj[][n], int dist) {
// Use Floyd Warshall algorithm to find the shortest distance between all pairs of cities
for (int k = 0; k < n; k++) {
for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
if (adj[i][j] > adj[i][k] + adj[k][j]) {
adj[i][j] = adj[i][k] + adj[k][j];
}
}
}
}
// Print the indices of cities that can be reached from the source city within the given distance
for (int i = 0; i < n; i++) { if (adj[src][i] <= dist) {
printf("%d\n", i);
}
}
}

void main(){
//Driver's Code
int n;int src;int dist; scanf("%d",&n);
scanf("%d",&src);
scanf("%d",&dist);
int (*adj)[n]=malloc(sizeof(int)*n*n); 
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){ scanf("%d",&adj[i][j]);
}
}
solution(src,n,adj,dist);
}
