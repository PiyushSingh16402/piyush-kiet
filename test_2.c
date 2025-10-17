#include <stdio.h>
void main(){
    int a;
    printf("Please enter number between 1 to 10: ");
    scanf("%d", &a);
    if(a>=1&&a<=5){
        printf("yes, %d",a);
    }
    else if (a>5&&a<=10){
        printf("no,user entered number between 5 to 10: %d", a);
    }
    else if(a==0){
        printf("User entered 0");
    }
    else{printf("Invalid number");
    }


}