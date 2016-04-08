#include <stdio.h>
#include <math.h>

int main(){
    int a;
    double  b;
    printf("请输入一个整数:");
    scanf("%d",&a);
    b = pow(a,5);
    printf("%d的5次方的值是:%.2f \n",a,b);
}
