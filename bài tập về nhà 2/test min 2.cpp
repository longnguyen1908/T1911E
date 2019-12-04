#include<stdio.h>
int t1911e(int b , int c){
  if (b<c){
  	return c;
  }else{
  	return c;
  	}
}
int ntll(int a, int b, int c){
   int ntl = t1911e(b, c);
	if (a<ntl){
		return a;
	}else{
		return ntl;
	}
}
int main (){
	    int a, b, c;
 
    printf("\nNhap so thu nhat: "); scanf("%d", &a);
    printf("\nNhap so thu hai: "); scanf("%d", &b);
    printf("\nNhap so thu ba: "); scanf("%d", &c);
 
    printf("\nSo nho nhat la :  %d", ntll(a, b, c));
    }
