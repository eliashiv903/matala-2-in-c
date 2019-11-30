#include <stdio.h>
#define cows 2
#define line 50
double a[cows][line];
void newBank ( double money) {
    money*=100;
    money=(int)money;
    money/=100;
    for(int i=0;i<50;i++){
        if(a[1][i]==0) {
            a[0][i]=money;
            a[1][i]=1;
            printf("the bank account number is:  %d\n", 901+i );
            return;
        }
    }
    printf("no place");
}
void balance(int number) {
    if(a[1][number-901]==0) printf("the bank account is not exist\n" );
    else printf("your account balance is: %f\n", a[0][number-901] );
}
void deposit(double Money,int number) {
   Money*=100;
    Money=(int) Money;
    Money/=100;
    if(a[1][number-901]==0) printf("the account bank not exist\n" );
    else{
        a[0][number-901]+=Money;
        printf("the money in your account is: %f\n", a[0][number-901] );
    }
}
void withdraw(double Money,int number) {
    Money*=100;
    Money=(int) Money;
    Money/=100;
    if (a[1][number - 901] == 0) printf("is not for new bank\n");
    else if (Money> a[0][number - 901]) printf("you dont have enough money ;\n");
    else {
        a[0][number - 901]=a[0][number - 901]-Money;
        printf("the money in your account is: %f\n", a[0][number - 901]);
    }
}

void  end (int number) {
    if(a[1][number - 901]==0) printf("the account bank not exist\n" );
    else{
        a[0][number-901]=0;
        a[1][number-901]=0;
    }
}

void ribit(double interest_rate){
    for(int i=0;i<50;i++){
        if(a[1][i]==1){
            double sum=a[0][i]-((a[0][i]*interest_rate)/100);
            sum*=100;
            sum=(int) sum;
            sum/=100;
            a[0][i]=sum;
        }
    }
}

void syso (){
    for(int i=0;i<50;i++)if(a[1][i]==1) printf("in account number %d the amount of money there is: %f\n", i+901,a[0][i] );
}
void endAll ( ) {
    for(int i=0;i<50;i++) {
        a[0][i] = 0;
        a[1][i] = 0;
    }
}
