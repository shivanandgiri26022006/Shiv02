


#include<stdio.h>
int main ()
{
    int marks;
    printf ("enter your marks:");
    scanf("%d",&marks);

    if(marks>=90){
        printf("A+\n");
        printf("goood job\n");
    }
    
     else if(marks<90 && marks>=80){
            printf("A\n");
            printf("Good but can do better\n");
    }
    else 
    {
        printf("B+\n");
        printf("need improvement\n");

    
    }
    printf("passed");



    return 0;
}
