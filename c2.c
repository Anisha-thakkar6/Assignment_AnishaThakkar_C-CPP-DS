#include<stdio.h>
#include<conio.h>

void func(int a, int b, int c, float *avg, float *per){
	*avg=(a+b+c)/3.0;
	*per=*avg/3.0;
}
int main(){
	float avg,per;
	int m1,m2,m3;
	printf("Enter the marks of 3 subjects :");
	scanf("%d%d%d",&m1,&m2,&m3);
	func(m1,m2,m3,&avg,&per);
	printf("\n\nAverage of the marks : %f\n\nPercentage of the student : %f", avg, per);
	return 0;
}
