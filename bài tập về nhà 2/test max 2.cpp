#include<stdio.h>
int max(int a, int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int t1911e(int a,int b, int c){
	int abc = max(a,b);
	if (c>abc){
		return c;
		}else{ 
		return abc;
		}
}
int main (){
	int a,b,c;
	printf("nhap so thu nhat :\n");
	scanf("%d",&a);
	printf("nhap so thu hai :\n");
	scanf("%d",&b);
	printf("nhap so thu ba :\n");
	scanf("%d",&c);
	
	printf("so lon nhat la : %d",t1911e(a,b,c));
	}
