#include<stdio.h>
void calfun(int *a, int*b );
int main(){
    int a;
    printf("enter the frist number : ");
    scanf("%d",&a);

    int b;
    printf("enter the second number : ");
    scanf("%d",&b);

    printf("frist number is %d\n",a);
    printf("second number is %d\n",b);


    calfun(&a,&b);
    printf("square of frist number is %d\n",a);
    printf("square of second number is %d\n",b);

    return 0;
    
}
void calfun(int *a,int *b){
    *a = (*a) * (*a);
    *b = (*b) * (*b);
}
    