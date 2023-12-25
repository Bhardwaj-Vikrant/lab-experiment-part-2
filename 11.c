#include<stdio.h>
int main(){
    int num[5] = {0,1,2,3,4};
    int *ptr = num; 
    for(int i = 0 ; i <5 ; i++){
        printf("%d\n",*ptr);
        ptr++;//printing array data using increment operator
    }  
    printf("\n");
 
    ptr = &num[4];
    for(int i = 4 ; i >=0 ; i--){
        printf("%d\n",*ptr);
        ptr--;//decrement operattor
    }

    printf("\n");
    printf("%u\n",ptr);
    ptr = ptr + 4 ;//adding a integer to a pointer 
    printf("%u\n",ptr);
    ptr = ptr - 4 ; //subtracting a integer from a pointer
    printf("%u\n",ptr);

    printf("\n");
    int _num = 36;
    int *_ptr = &num ; 
    printf("%u\n",_ptr);
    printf("%u\n",ptr);
    printf("%u",_ptr - ptr);//difference bw two pointers

    

    return 0;
}
