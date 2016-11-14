#include <stdio.h>

/* function declaration for leap year calculation */
int checkLeap(int year);

int main(int argc, char *argv[])
{
   	int year;

   	printf( "Enter a year :");
   	scanf("%d", &year);
	printf("Year entered: %d\n", year);

	int isLeap = checkLeap(year);
    return isLeap;
}

/* function for calculating leap year */
int checkLeap(int year)
{
	if( (year%400==0 || year%100!=0) &&(year%4==0)) {
    	printf("Year %d is  a leap year\n",year);
    	return 0;
    }
	else {
    	printf("Year %d is  not a leap year\n", year);
    	return -1;
	}

}


rohanrd07