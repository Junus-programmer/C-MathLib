#include <stdio.h>
#include "Math_Lib.h"

int main(){
    float randomnumber = random(1, 5, 10);
    float circle_dtest = circle_d(2.0);
    printf("random number is %f \n", randomnumber);
    printf("r is %f \n", circle_dtest);


    return 0;
}