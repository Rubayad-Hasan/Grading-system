#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    if(marks>=80 &&marks<=100){
        printf("you have got A+ Grade\n");
        printf("you have passed\n");
    }
        if(marks>=90)
            {
                printf("congratulation you got scholarship\n");
            }
            else if(marks>=70&&marks<=79){
                printf("you have A grade\n");
            }
           else if(marks>=60&&marks<=69){
                printf("you have B grade\n");
            }
            else if(marks>=50&&marks<=59){
                printf("you have c grade\n");
            }
            else if(marks>=40&&marks<=49){
                printf("you have D grade\n");
            }
            else if("marks>=0 && marks<=32"){
                printf("you have got F grade\n");
                printf("you have Faiiled,Try Again");
            }
            else {
                printf("invalid marks");
            }
            return 0;
}



