#include <stdio.h>
int main (){
	int a ,b;

	do {
	printf("nhap vao a = :\n");
	scanf("%d",&a);
	printf("nhap vao b=:\n");
	scanf("%d",&b);
	} while (!(a<b));
	int s=0;
	for (int i=1;i<=b;i++)
	{
		s+=i;
		}
		printf ("tong cac so a den b la :%d ",s);
	
}
