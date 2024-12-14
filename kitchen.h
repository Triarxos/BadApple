int expiration(int days_in_kitchen){
    int years, months, days;
    int total_days;

    printf("Enter the expiration date:\n");
    scanf(" %d/%d/%d", &days, &months, &years);

    total_days = years*365 + months*30 + days;

    if (days_in_kitchen>total_days){
        return 1;
    }
    else{
        return 0;
    }
}