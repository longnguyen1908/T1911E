#include <stdio.h>
int main(){
	int a;
	printf("Nhap vao so a: ");
	scanf("%d",&a);
	if ((a>=2 && a<=8)){
		if (a>=2 && a<=7){
			printf("a la mot thu trong tuan va la thu %d\n",a);
		}else{
			printf("a la mot thu trong tuan va la chu nhat\n");
		}
	}else{
		printf("\na= %d ko phai la mot ngay trong tuan",a);
	}
}
