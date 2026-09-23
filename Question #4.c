#include <stdio.h>

int main(){

    int cardStatus,checkPIN,accBal,withdrawAmount;
    int newBal,remaining,notes2000,notes500,notes100;

    printf("Enter status of your card (1=Valid) (0=Blocked) : ");
    scanf("%d",&cardStatus);
    
    printf("Enter status of your PIN (1=Correct) (0=Wrong) : ");
    scanf("%d",&checkPIN);

    printf("Enter your account balance: ");
    scanf("%d",&accBal);

    printf("Enter withdrawal amount: ");
    scanf("%d",&withdrawAmount);

    if(cardStatus==0){
        printf("Card Blocked. Contact Bank");
    }else if(checkPIN==0){
        printf("Incorrect PIN");
    }else if(withdrawAmount<=0){
        printf("Invalid Amount");
    }else if(withdrawAmount>accBal){
        printf("Inufficent Balance");
    }else if(withdrawAmount>25000){
        printf("Daily Limit Exceeded");
    }else if((accBal-withdrawAmount)<1000){
        printf("Minimum Balance Must Be Maintained");
    }else{
        newBal=accBal-withdrawAmount;
        remaining=withdrawAmount;

        notes2000 = remaining / 2000;
        remaining = remaining % 2000;
        notes500 = remaining / 500;
        remaining = remaining % 500;
        notes100 = remaining / 100;
        remaining = remaining % 100;
    }

    printf("\nNew Balance: %d",newBal);
    printf("\nNumber of 2000 notes: %d",notes2000);
    printf("\nNumber of 500 notes: %d",notes500);
    printf("\nNumber of 100 notes: %d",notes100);
    printf("\nPlease collect your cash");

    return 0;

}

