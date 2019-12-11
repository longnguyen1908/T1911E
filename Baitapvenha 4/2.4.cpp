#include<stdio.h>
int main(){
	int a,b,c;
	do {printf("nhap 3 canh cua tam giac:\n nhap a: \n");
	scanf("%d", &a);
	printf("nhap b:");
	scanf("%d",&b);
	printf("nhap c:");
	scanf("%d",&c);
	if (a+b<=c||a+c<=b||b+c<=a||a<=0||b<=0||c<=0)
	{printf("\nday ko phai tam giac, vui long nhap lai!");}}
	while (a+b<=c||a+c<=b||b+c<=a);
	printf("day la 1 tam giac! cam on ban!");
	return 0;
}
