#include <stdio.h> 

int main(){
    
    int vehichleType,hoursParked,membership;
    float fee;

    printf("Enter vehicle type (1.Bike) (2.Car) (3.Truck) : ");
    scanf("%d", &vehichleType);

    printf("For how many hours do you want to park your vehicle? ");
    scanf("%d", &hoursParked);

    printf("Enter your Membership Status (1.Member) (2.Non-Member) : ");
    scanf("%d", &membership);

    if(hoursParked>0){
        switch(vehichleType){
            case 1 : fee=20*hoursParked;
            break;

            case 2 : 
            if(hoursParked<=2){
                fee=50;
            }else{
                fee=50+30*(hoursParked-2);
            }
            break;

            default : printf("Invalid Vehicle.");

        }
    }else{
        printf("Invalid Duration.");
    }

    if(fee>200 && membership==1){
        fee=fee*0.85;
        printf("Your final payable is $%.2f",fee);
    }else{
        printf("Your final payable is $%.2f",fee);
    }

    return 0;
}

