#include <stdio.h>
#include <stdlib.h>

#define MAX_N 5

int p[MAX_N + 1];  // The permutation
int pi[MAX_N + 1]; // The inverse permutation
int dir[MAX_N + 1]; // The direction of each element

void print_permutation(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
}

int get_mobile(int n) {
    int mobile = 0, mobile_pos = 0;
    for (int i = 1; i <= n; i++) {
        int j = pi[i] + dir[i];
        if (j >= 1 && j <= n && p[j] < p[i]) {
            if (p[i] > mobile) {
                mobile = p[i];
                mobile_pos = i;
            }
        }
    }
    return mobile_pos;
}

void swap(int i, int j) {
    int temp = p[i];
    p[i] = p[j];
    p[j] = temp;

    pi[p[i]] = i;
    pi[p[j]] = j;
}

void reverse_directions(int n, int mobile) {
    for (int i = 1; i <= n; i++) {
        if (p[i] > mobile) {
            dir[i] = -dir[i];
        }
    }
}

void generate_permutations(int n) {
    for (int i = 1; i <= n; i++) {
        p[i] = i;
        pi[i] = i;
        dir[i] = -1;
    }

    print_permutation(n);

    int mobile = get_mobile(n);

    while (mobile != 0) {
        int j = pi[mobile] + dir[mobile];
        swap(pi[mobile], j);
        reverse_directions(n, mobile);

        print_permutation(n);

        mobile = get_mobile(n);
    }
}

int main() {
    printf("Permutations of length 3:\n");
    generate_permutations(3);

    printf("Permutations of length 4:\n");
    generate_permutations(4);

    printf("Permutations of length 5:\n");
    generate_permutations(5);

    return 0;
}
