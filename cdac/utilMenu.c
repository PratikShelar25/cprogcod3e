#include"utilMenu.h"
#include<stdio.h>


int countDigit(int);
int reverse(int);
int isPalindrom(int);
int isPrime(int);
// int isArmstrong(int);



int countDigit(int n){
	int count = 0;
	if( n == 0){
	return count; 
	}else{
	while(n != 0){
		n = n/10;
		count++;
	}
	
	}
	return count;
}




int reverse(int n){
	int rev=0, rem;

	while(n!=0){
		rem = n%10;
		rev = rev * 10 + rem;
		n = n/10;
	}
	return rev;
}



int isPalindrom(int n){
	
	if( n == reverse(n)){
		return 1;
	}else
		return 0; 
}




int isPrime(int n){
	if( n == 1)
		return 0;
	for(int i=2; i <= n/2; i++){
		if( n % i == 0)
			return 0;
	}
	return 1;
}



