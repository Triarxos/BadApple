#include <stdio.h>
#include "kitchen.h"

int main(int argc, char* argv[]){
    int day, month, year;
    int days_in_kitchen;

    int is_expired;

    printf("What's today's date?\n");
    scanf(" %d/%d/%d", &day, &month, &year);
    days_in_kitchen = year*365 + month*30 + day;

    is_expired = expiration(days_in_kitchen);

    switch ((is_expired))
    {
    case (1):
        printf("Woop, that's expired!!!\n");
        break;
    
    default:
        printf("Looks good to me!!!\n");
        break;
    }

    return 0;

}