// WAP to take time as an input in below given format and convert the time format and 
// display the result as given below.
// User Input date format – “HH:MM”
// Output format – “HH hour and MM Minute” 

#include<stdio.h>
int main()
{
    int hour,minute;
    printf("Enter hours:\t");
    scanf("%d",&hour);
    printf("Enter minutes:\t");
    scanf("%d",&minute);
    printf("\"%d:%d\"\n",hour,minute);
    printf("\"%d hour and %d minutes\"");
    return 0;
}