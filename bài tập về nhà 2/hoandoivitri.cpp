#include <stdio.h>
 
int main()
{
    int a, b;
    printf("Nhap 2 so a, b:\n");
    scanf("%d%d", &a, &b);
 
    printf("Ban da nhap:\na = %d \nb = %d\n", a, b);
 
    int t1911e = a;
    a = b;
    b = t1911e;
 
    printf("Sau khi hoan vi:\na = %d\nb = %d\n", a, b);

}
