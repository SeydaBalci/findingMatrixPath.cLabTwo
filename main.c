#include<stdio.h>
int main() {

    int matrix[4][4]={
                {1,1,0,0},
                {0,1,1,1},
                {0,1,0,1},
                {0,1,0,1}
            };

    printf("\nmatrix:\n");

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n\npaths:\n");

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if(matrix[i][j] == 1){
                printf("1");""
            }
            else{
                printf("2\n");
            }

        }
    }
}
