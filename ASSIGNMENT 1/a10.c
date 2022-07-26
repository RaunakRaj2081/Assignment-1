// WAP to take date as an input in below given format and convert the date format and 
//display the result as given below.
//User Input date format – “DD/MM/YYYY” (27/11/2022)
//Output format –
//“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022

#include<stdio.h>
int main()
{
    int DD,MM,YYYY;
    printf("Enter the date\n");
    scanf("%d",&DD);
    printf("Enter the month\n");
    scanf("%d",&MM);
    printf("Enter the year\n");
    scanf("%d",&YYYY);
    printf("Input format is : %d/%d/%d\n",DD,MM,YYYY);
    printf("\" (Day - %d , Month - %d, year - %d)\"",DD,MM,YYYY);
    return 0;
}
