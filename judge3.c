#include <stdio.h>
#include <stdlib.h>

int backtracking (int **grade, x, y){
    int r=0;
    
    
    
    return r;
}

int main() {
    int N, a, b, r;
    
    scanf("%d", &N);
    
    int **grade = (int**)calloc(N, sizeof(int*));
    
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &a, &b);
        
        grade[i] = (int*)calloc(b, sizeof(int));
    }
    
    r = backtracking(grade, 0, 0);
    
    for (int i = 0; i < N; i++) {
        free(grade[i]);  
    }
    free(grade);  
    
    return 0;
}
