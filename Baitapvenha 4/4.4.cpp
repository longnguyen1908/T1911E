#include <stdio.h>
 
int main(){
    int in, sodu;
    int daonguoc = 0;
    printf("nhap so tu nhien co 2 chu so tro len:"); 
    scanf("%d", &in);
    while(in > 0){
        sodu = in % 10;
        daonguoc = daonguoc * 10 +  sodu; 
        in = in / 10;
    }
    printf("so dao nguoc cua  so tren la : %d", daonguoc);
}
