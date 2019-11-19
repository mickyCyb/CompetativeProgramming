#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void addtwonumbers(){

	int numb1,numb2,result;
	printf("Enter the first number: ");
	scanf("%d",&numb1);
	printf(" Enter the second number: ");
	scanf("%d",&numb2);

	result = numb1 + numb2;	
	printf("the sume is: %d", result);
	printf("\n");
	
}

void printrightpyramid(){
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	for(int i= 1; i<a; i++){
		for(int j=1; j<i; j++){
			printf("*");
		}
	printf("\n");
	}

}
void printisoclespyramid(){
	int a;
	printf("Enter the number: ");
	scanf("%d",&a);
	
	
	for(int i=0;i<a;i++){
		for(int j=0;j<a-i;j++){
			printf(" ");
		}
		for(int k=0;k<=i;k++){
			printf("* ");
		}	
		printf("\n");	
	}

}


int main(){
	
	//printrightpyramid();
	//printisoclespyramid();
	//addtwonumbers();


}

