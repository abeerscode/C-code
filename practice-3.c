#include<stdio.h>
int main(){
    int i,j,k;
    i=7;
    j=i+1;
    k=j;

    i++;
    j--;
    k=i+j;
    k=i--;
    j=(k--)+(++i);
    i=(--j)+(++k)+5;
    printf("i=%d, j=%d, k=%d\n",i,j,k);
    return 0;
}