#include <stdio.h>
#include <stdlib.h>

void input_read(int *ptrx,int *ptry);
int gcd(int x,int y);
int iabs(int a);

int main(){
    int x,y;
    int gcd_xy;
    input_read(&x,&y);
    gcd_xy = gcd(x,y);
    printf("НОД - %d\n",gcd_xy);
    return 0;
}

void input_read(int *ptrx,int *ptry){
    printf("Введите 2 числа - ");
    int res = scanf("%d %d",ptrx,ptry);
    if (res != 2 || *ptry == 0){
        printf("Неправильный ввод!");
        abort();
    }
}

int gcd(int x,int y){
    int r;
    r = x;
    x = iabs(x);
    y = iabs(y);
    while (y!=0){
        r = x%y;
        x = y;
        y = r;
    }
    return x;
}

int iabs(int a){
    return (a<0) ? -a : a;
}