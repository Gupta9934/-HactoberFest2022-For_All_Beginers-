//Write a program to find out GCD (greatest common divisor) using the following three
//algorithms.
// b) Consecutive integer checking algorithm.
#include<stdio.h>
#include<math.h>
#include<time.h>
int main(){
	int a,b;
    clock_t t1=clock();
	printf("\nENTER THE TWO NUMBERS :\n");
	scanf("%d %d",&a,&b);
	if(a>b){
		int i=b;
		for(i=b;i>1;i--){
			if(a%i==0&&b%i==0){
				break;
			}
		}
		printf("GCD IS %d",i);
	}
	else{
		int i=a;
		for(i=a;i>1;i--){
			if(b%i==0&&a%i==0){
				break;
			}
		}
		printf("GCD IS %d",i);
	}
    t1=clock()-t1;
	double time_taken=((double)t1)/CLOCKS_PER_SEC;
	printf("\nTime taken is %f",time_taken);
    printf("\nSaiyam Gupta \n Roll Number : 2153043\n");
    
}