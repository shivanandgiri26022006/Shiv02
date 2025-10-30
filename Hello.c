#include<stdio.h>
int main ()
{
    int num;
    printf("Enter your number:");
    scanf("%d", &num);

    if(num>=1){
        printf("real number");
    }

    else if (num<=0){
        printf("not a real number");
    }

    else {
        printf("not a digit");
    }

    return 0;




}
