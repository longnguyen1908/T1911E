#include <stdio.h>
int main(){
	printf(" tinh tong cac chu so cua n\n");
	int n;
	printf("n = ");
	scanf("%d",&n);
	int i=0,s=0,sodu;
	for(;n!=0;i++)
	{
		sodu=n%10;
		s+=sodu;
		n=n/10;
		}
	printf("tong cac chu so cua n la %d",s);
	return 0;
}
