//Write a program to find out GCD (greatest common divisor) using the following three
//algorithms.
//a) Euclid’s algorithm
#include<stdio.h>
#include<math.h>
#include<time.h>
int gcd(int x,int y){
	int c=y%x;
	if(c==0){
		return x;
	}
	else{
		y=x;
		x=c;
		return gcd(x,y);
	}
}
int main(){
	clock_t t1=clock();
	int a,b;
	printf("\nENTER THE TWO NUMBERS A AND B :\n");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("GCD IS %d",gcd(b,a));
	}
	else{
		printf("GCD IS %d",gcd(a,b));
	}
	t1=clock()-t1;
	double time_taken=((double)t1)/CLOCKS_PER_SEC;
	printf("\nTime taken is : %f",time_taken);
	printf("\nSaiyam Gupta \nRoll Number : 21053043\n");

}