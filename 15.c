#include<stdio.h>
int n;
int calsum(int arr[][n],int n );
int main(){ 
    printf("enter the order of square matrix : ");
    scanf("%d",&n);
    int arr[n][n];
    printf("enter the matrix :");
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            scanf("%d",&arr[i][j]);
        }
    } 
    printf("the matrix is : \n");
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
        
    } 
    printf("sum of diagnol elements is %d ",calsum(arr,n));

    return 0;
}

int calsum(int arr[][n] , int n ){
    int sum = 0;
    for(int i=0,j=0 ; i<n,j<n ; i++,j++){
        sum = sum + arr[i][j]; 
    }
    return sum;
}