#include<stdio.h>
void DisplayR()
{
 int icnt=1;

    if(icnt<=4)
 
 
 {
       printf("*\n");
       icnt++;
       DisplayR();              //recursive call
 }

}

int main()
{
    DisplayR();
    return 0;

}