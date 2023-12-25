//checking if a string is palindrome
#include<stdio.h>
#include<string.h>
int main(){
  char palindrome[]={"\"vikrant\""};
  int n=strlen(palindrome)-1;
 
  int output=0;
  for(int i=0;i<=n;i++){
    
        if(palindrome[i]==palindrome[n-i]){
          output=1;
        }
        else{
            output=0;
            break;//this is necessary as it exits the loop if a mismatch is found
        }
       }
  if(output==1){
    printf("%s is a palindrome\n",palindrome);
  }
  else{
    printf("%s is not a palindrome\n",palindrome);
  }

    char a[20]={"my name is "};
    char b[]={"vikrant"};
    int len = strlen(b);
    printf("length of \"%s\" is %d\n",b,len);
    printf("%s",strcat(a,b));
    

    return 0;
}