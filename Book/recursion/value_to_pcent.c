/* value_to_pcent.c */

#include<stdio.h>

//function declaration
int RecursvFcnTogetPrcntge();

float Var;
unsigned int count=1;
float Prcntge;

int main()
{

    printf("\nEnter a value to split in percentage: ");
    scanf("%f",&Var);

    Var=Var/100;
    RecursvFcnTogetPrcntge();
    printf("\n");
    
    return 0;
}

int RecursvFcnTogetPrcntge()
{

    if(count==4)
    {
        return 1;
    }

    Prcntge=Var*count;
    printf("\n%3d Percent = %.02f",count, Prcntge);
    count++;
    RecursvFcnTogetPrcntge();
    return 0;
}

