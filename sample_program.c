#include<stdio.h>
#include "header.h"
#include <time.h>
int main()
{
int num ,  index;
int num1,num2;

clock_t start_time;
double cpu_time_used;

start_time = clock();
int k=0, i;
for(i=0;i<1000000;i++){
	k++;	
}

int choice; 
printf("Choices: \n  1. getbit \n  2. setbit \n  3. clearbit\n  4. xorfrom1ton\n  5. countsetbits\n  6. powerof2\n  7.  number at most significant bit\n  8. check for alternate bit pattern\n 9. calculate the flips required to convert one number to another\n  10. calculate xor without using ^ operator\n");
printf("Enter choices: ");
scanf("%d",&choice); 
switch(choice)
{
 case 1:
       printf("enter your number:");
       scanf("%d",&num);
       printf("enter index whose bit value you want to show:");
       scanf("%d",&index);
       int ans = getbitAt(num,index);
       printf("the bit at index %d",index);
       printf(" is %d",ans);
       clock_t end_time = clock();
       cpu_time_used = ((double)(end_time-start_time))/CLOCKS_PER_SEC;
       printf("CPU Time Used: %f seconds\n", cpu_time_used);
       break;
 case 2:
      printf("enter your number\n");
      
      scanf("%d",&num);
      printf("enter the index  whose bit value you want to set:");
      scanf("%d",&index);
      printf("the new number after setting the bit at index",index,"is",setbitAt(num,index));
             end_time = clock();
       cpu_time_used = ((double)(end_time - start_time))/CLOCKS_PER_SEC;
       printf("CPU Time Used: %f seconds\n", cpu_time_used);

break;
 case 3:
	printf("enter your number\n");
         scanf("%d",&num);
	printf("enter the index whose bit value who want to clear");
	scanf("%d",&index);
	printf("the number after clearing the bit at index ",index,"is",clearbitAt(num,index));
               end_time = clock();
       cpu_time_used = ((double)(end_time - start_time))/CLOCKS_PER_SEC;
       printf("CPU Time Used: %f seconds\n", cpu_time_used);


break;
  case 4:
       printf("enter your number");
       scanf("%d",&num);
      int temp = xorfrom1ton(num);
      printf("the xor from 1 to %d", num);
      printf("is %d",temp);
             end_time = clock();
       cpu_time_used = ((double)(end_time - start_time))/CLOCKS_PER_SEC;
       printf("CPU Time Used: %f seconds\n", cpu_time_used);

      break;
  case 5 :
      printf("enter your number");
      scanf("%d",&num);
      printf("the no of set bits in %d",num);
     printf(" %d",countsetbits(num));
            end_time = clock();
       cpu_time_used = ((double)(end_time - start_time))/CLOCKS_PER_SEC;
       printf("CPU Time Used: %f seconds\n", cpu_time_used);

      break;
  case 6 :
	printf("enter your number");
	scanf("%d",&num);
	int result = powerof2(num);
	if(result == 1)
	{
		printf("the number is a power of 2\n");
	}
	else
	{
		printf("the number is not a power of 2\n");
	}
               end_time = clock();
       cpu_time_used = ((double)(end_time - start_time))/CLOCKS_PER_SEC;
       printf("CPU Time Used: %f seconds\n", cpu_time_used);

        break;
  case 7:
	printf("enter the number");
	scanf("%d",&num);
	int number = mostsigbitnum(num);
        printf("the most significant bit number is %d",number);
               end_time = clock();
       cpu_time_used = ((double)(end_time - start_time))/CLOCKS_PER_SEC;
       printf("CPU Time Used: %f seconds\n", cpu_time_used);

	break;     
  case 8:
	printf("enter your number");
	scanf("%d",&num);
	int output = alternatepattern(num);
	if(output==1)
	{
		printf("there is a alterante bit pattern in this number");
	}
	else if (output ==0)
	{
		printf("there is no alternate bit pattern in this number");
	}
               end_time = clock();
       cpu_time_used = ((double)(end_time - start_time))/CLOCKS_PER_SEC;
       printf("CPU Time Used: %f seconds\n", cpu_time_used);

        break;
  case 9:
     
       printf("enter first number");
       scanf("%d",&num1);
       printf("enter second number");
       scanf("%d",&num2);
       int out =  flipsrequiredtoconvert(num1,num2);
       printf("no of flips required to convert %d",num1);
       printf("to%d ",num2);
       printf("is%d",out);
              end_time = clock();
       cpu_time_used = ((double)(end_time - start_time))/CLOCKS_PER_SEC;
       printf("CPU Time Used: %f seconds\n", cpu_time_used);

       break;

  case 10 :

      printf("enter first number");
      scanf("%d",&num1);
      printf("enter second number");
      scanf("%d",&num2);
      printf("the xor of both numbers is %d",xorwithoutusingoperator( num1 ,  num2 ));
           end_time = clock();
       cpu_time_used = ((double)(end_time - start_time))/CLOCKS_PER_SEC;
       printf("CPU Time Used: %f seconds\n", cpu_time_used);

     break;
}

}

