#include <stdio.h>
int main(){
    int A[3][3];//A is 3*3 matrix
    printf("A = \n");
    for(int i=0; i<3 ; i++){
        for(int j=0; j<3;j++){
            A[i][j] = i+j;/*defination of A and priting it*//*defination of A and priting it*/
            printf("%d ",A[i][j]);
        }
            printf("\n");
    } 
    

    int B[3][3];//B is 3*3 matrix 
    printf("\nB =\n");
    for(int i=0; i<3 ;i++){
        for(int j=0; j<3; j++){
            B[i][j] = 10*(i+1) + (j+1);//defintion of B
            printf("%d ",B[i][j]);//printing of B
        }
        printf("\n");
    }


    int C[3][3];
    printf("\nC =\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3 ;j++){
            C[i][j] = A[i][j] + B[i][j];//C = A + B
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}