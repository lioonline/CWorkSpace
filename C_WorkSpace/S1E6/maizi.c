#include <stdio.h>
#include <math.h>

int  main() {
  double   sum,temp,weight,i;
    for (int i=0;i<64;i++){
        temp = pow(2,i);
        sum = sum + temp;

    }
    weight = sum/25000;
    printf("舍罕王应该给达依尓%f粒麦子 \n",sum);
    printf("共%f公斤 \n",weight);
    return 0;
}
