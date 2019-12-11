#include<stdio.h>
int main(){
	int a;
	int s=0;
	printf("\n nhap so vao day: \n");
	scanf("%d", &a);
	if (a<2)
		printf("so %d khong phai la so nguyen to!",a);
	else if (a==2)
		printf("so %d la so nguyen to!",a);	
		else
	{{for (int i=2 ; i<=a ; i++)
		if(a%i==0)
	 s=s+1;}
    if(s==1)
			printf("so %d la so nguyen to!",a);
		else
		printf("so %d khong phai la so nguyen to!",a);}
	return 0;	
	} 

