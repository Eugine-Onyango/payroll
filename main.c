/*payroll system
created by Titus Njiru
 on March 6, 2021
 MIT License
 C99*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100], kra[201];
    int hours, overtime, gross, tax, net;
    printf("Gitonga\'s Factory Payroll/n");

    printf("Enter name:");
    gets(name);
    printf("enter KRA pin:");
    gets(kra);
    printf("hours worked:");
    scanf("%d",&hours);
    return 0;

    if(hours > 40) {
       overtime = (hours-40) * 1.5 * 1000;
    }
    else{
        overtime=0;
        gross=hours * 1000;

    }
    tax=0.3 * gross;
    net = gross - tax;
    printf("Employee Name: %s\n",name);
    printf("Gross income: %d\n",gross);
    printf("Tax paid: %d\n",tax);
    printf("Net income: %d\n",net);
    return 0;

}
