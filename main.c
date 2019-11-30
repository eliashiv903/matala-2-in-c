#include <stdio.h>
#include "myBank.h"
int main() {
    char x;
    double interest_rate;
    double amount;
    int account_number;
    double many;
    printf("main: choose the appropriate option:\n 1. O -To create new account bank\n 2. B -to show your balance\n 3. D -to deposit money \n 4. W -to withdraw money \n 5. C - to close account in the bank\n 6. I -to give ribit to all accounts in  the bank \n 7. P- to print all accounts in the bank \n 8. E- delete all accounts in bank and close pragram\n ");
    scanf("%1s", &x);
    while (x != 'E') {
        if (x == 'O') {
            printf("select a deposit amount\n");
            scanf("%lf", &many);
            while(many<0){
                printf("error! the amount should be positive, select a deposit amount again\n");
                scanf("%lf", &many);
            }
            newBank(many);
        }
        if (x == 'B') {
            printf("you account_number;\n");
            scanf("%d", &account_number);

            if(account_number > 900 && account_number < 951) balance( account_number);
            else      printf("your input not illegal,yo go to main;\n");
        }
        if (x == 'D') {

            printf("you account_number?;\n");
            scanf("%d", &account_number);
            printf("CHES amount many tp put;\n");
            scanf("%lf", &amount);
            if(account_number > 900 && account_number < 951)  deposit( amount, account_number);
            else      printf("you account_number not legal,yo go to main;\n");
        }
        if (x == 'W') {
            printf("you account_number?;\n");
            scanf("%d", &account_number);
            printf("CHES amount many tp take;\n");
            scanf("%lf", &amount);
            if(account_number > 900 && account_number < 951)  withdraw(amount, account_number);
            else   printf("you account_number not legal,yo go to main;\n");

        }
        if (x == 'C') {
            printf("you account_number;\n");
            scanf("%d", &account_number);
            if(account_number > 900 && account_number < 951)  end(account_number);
            else      printf("you account_number not legal,yo go to main;\n");

        }
        if (x == 'I') {
            printf("CHES interest_rate);\n");
            scanf("%lf", &interest_rate);
            ribit(interest_rate);
        }
        if (x == 'P') {
            syso();
        }
        printf("main: choose the appropriate option:\n 1. O -To create new account bank\n 2. B -to show your balance\n 3. D -to deposit money \n 4. W -to withdraw money \n 5. C - to close account in the bank\n 6. I -to give ribit to all accounts in  the bank \n 7. P- to print all accounts in the bank \n 8. E- delete all accounts in bank and close pragram\n ");
        scanf("%1s", &x);
    }
    endAll();
    return 0;
}