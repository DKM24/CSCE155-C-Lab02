#include <stdio.h>
int main() {
    float dollar, gbp, yen, exchange_fee;

    printf("Enter dollar amount\n");
    scanf("%f",&dollar);

    exchange_fee = 0.1*dollar;
    dollar -= exchange_fee;
    
    gbp = (dollar/2)*0.79;
    yen = (dollar/2)*127.65;
    
    printf("Exchange tax is %0.2f\n",exchange_fee);
    printf("GBP is %0.2f\n",gbp);
    printf("Yen is %0.2f\n",yen);

}




