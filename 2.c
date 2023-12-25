#include<stdio.h>
int main(){
    int mat1[3][3];
    printf("Enter frist 3X3 matrix :");//input 1st matrix
    for(int i = 0 ; i <3 ; i ++){
        for(int j = 0 ; j <3 ; j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    int mat2[3][3];
    printf("Enter second 3X3 matrix :");//input second matrix
    for(int i = 0 ; i <3 ; i ++){
        for(int j = 0 ; j <3 ; j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Frist Matrix : \n");
    for(int i = 0 ; i <3 ; i ++){//printing frist matrix
        for(int j = 0 ; j <3 ; j++){
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Second Matrix : \n");//printing second matrix 
    for(int i = 0 ; i <3 ; i ++){
        for(int j = 0 ; j <3 ; j++){
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
int multimat[3][3];//calculation of multiplaction matrix
for(int i = 0 ; i<3 ; i++){
    for(int j  = 0 ; j<3 ; j++){
            multimat[i][j] = 0;
            for(int k = 0 ; k <3 ; k++){
            multimat[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
}


printf("Multiplaction Matrix : \n");
    for(int i = 0 ; i <3 ; i ++){//printing multiplation matrix
        for(int j = 0 ; j <3 ; j++){
            printf("%d\t",multimat[i][j]);
        }
        printf("\n");
    }

    return 0;
}