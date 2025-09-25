#include "utilMenu.h"
#include<stdio.h>

int main (){
     int ch;

     printf("Make choice \n 1. Count digit\n 2. Reverse Number \n 3. Check Palindrome \n 4. Check Prime Number\n");

     scanf("%d",&ch);
     switch(ch){
	case 1:
	     int n;
    	     printf("Enter a number to count the digits:");
  	     scanf("%d",&n);
             printf("The digit count is %d\n", countDigit(n));
	     break;

	case 2:
	     n=0;
	     printf("Enter reverse number");
	     scanf("%d",&n);
	     printf("the reverse number is %d\n", reverse(n));
	     break;

	case 3:
	     n=0;
	     printf("enter palindrome number");
	     scanf("%d",&n);
	     if(isPalindrom(n))
		     printf("is palindrome");
	     else 
		     printf("not palindrome");
	     break;

	case 4:
	     n=0;
	     printf("enter number");
	     scanf("%d",&n);
	     if(isPrime(n))
		     printf("number is  prime");
	     else
		     printf("given number is not  prime number ");
	     break;

       default:
                printf("No Choose");		      
     }


     return 0;

}
