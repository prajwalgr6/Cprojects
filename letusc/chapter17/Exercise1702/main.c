#include <stdio.h>
#include<stdlib.h>

struct bank{
    int accnum;
    char name[20];
    int balance;
    int pin;

};
void createAccount(struct bank *,int);
void balanceEnquiry(struct bank *,int);
void deposite(struct bank *,int );
void withdraw(struct bank *b, int);

int main()
{
    int ch;
    int size;
    printf("enter the number of accounts\n");
    scanf("%d",&size);
    struct bank b[size];
    createAccount(b,size);
    while(1)
    {
        printf("enter your choice\n");
        printf("1.Balance enquiry\n2.Deposite\n3.withdraw\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch){
                  case 1:balanceEnquiry(b,size);
                      break;
                  case 2:deposite(b,size);
                      break;
                  case 3:withdraw(b,size);
                      break;
                  case 4:exit(0);
                  }
    }
    return 0;
}
void createAccount(struct bank *b,int size){

    int i;
    for(i=0;i<size;i++){
        printf("enter the %d account details\n",i+1);
        printf("enter account number\n");
        scanf("%d",&b[i].accnum);
        printf("enter the account name\n");
        scanf("%s",b[i].name);
        printf("enter the Pin\n");
        scanf("%d",&b[i].pin);
        printf("enter the balance\n");
        scanf("%d",&b[i].balance);
    }

}
void balanceEnquiry(struct bank *b,int size){
    int pi,i;
    printf("enter the pin\n");
    scanf("%d",&pi);
    for(i=0;i<size;i++){
        if(pi==b[i].pin){
            printf("balance of %s is  %d\n",b[i].name,b[i].balance);
        }
    }
}
void deposite(struct bank *b,int size){
    int pi,i,amo;
    printf("enter the pin\n");
    scanf("%d",&pi);
    for(i=0;i<size;i++){
        if(pi==b[i].pin){
            printf("enter the amount to deposite\n");
            scanf("%d",&amo);
            b[i].balance=b[i].balance+amo;
            printf("Total Balance is %d\n",b[i].balance);
        }

    }
}
void withdraw(struct bank *b,int size){
    int pi,i,amo;
    printf("enter the pin\n");
    scanf("%d",&pi);
    for(i=0;i<size;i++){
        if(pi==b[i].pin){
            printf("enter the amount to withdraw\n");
            scanf("%d",&amo);
            if((b[i].balance-amo)<=1000){
                printf("balance is low to withdraw %d",b[i].balance);
            }
            else{
                b[i].balance=b[i].balance-amo;
                printf("Total Balance is %d\n",b[i].balance);
            }
        }
    }
}
