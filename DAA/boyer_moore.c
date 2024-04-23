#include<stdio.h>

#include<string.h> #include<conio.h> #include <math.h>
int max(int a, int b) { return (a > b) ? a : b;
}
void operation(char text[], char pattern[]) {

int n = strlen(text); int m = strlen(pattern); int badChar[256];
for(int i = 0; i < 256; i++) { badChar[i] = -1;
}
for(int i = 0; i < m; i++) { badChar[(int) pattern[i]] = i;
printf("%d\n", total_weight); free(visited);
}

int main() {
int n, i, j, edges, e, src, dest, len; scanf("%d", &n);
int graph[n][n];

scanf("%d", &edges);

for (i = 0; i < n; i++) {
for (j = 0; j < n; j++) { graph[i][j] = 0;
}
}

for (e = 0; e < edges; e++) {
scanf("%d %d %d", &src, &dest, &len); graph[src-1][dest-1] = len; graph[dest-1][src-1] = len;
}
operation(n, graph); 
return 0;
}