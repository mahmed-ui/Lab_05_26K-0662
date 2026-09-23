#include <stdio.h>

int main(){
    
    int time,motionDetect,lightLevel,roomType,mode=0,action=0,cooking=0;

    printf("Enter the time of the day (0-23): ");
    scanf("%d", &time);

    printf("Enter the motion detected (1=Yes/0=No): ");
    scanf("%d", &motionDetect);

    printf("Enter the light level (0-100): ");
    scanf("%d", &lightLevel);

    if(time>=0 && time<=23){
        if(motionDetect==0 || motionDetect==1){
            if(lightLevel>=0 && lightLevel<=100){
                printf("Pick the room (1=LivingRoom) (2=BedRoom) (3=Kitchen) : ");
                scanf("%d",&roomType);
                if(roomType==1 || roomType==2){
                    if(time>6 && time<=18 && motionDetect==1){
                        mode=1;
                        action=1;
                    }else if(time>18 && time<=23 && motionDetect==1){
                        mode=2;
                        action=2;
                    }else if(time>=1 && time<=6){
                        mode=3;
                        action=3;
                    }else if(motionDetect==0){
                        mode=4;
                        action=4;
                    }
                }else if(roomType==3){
                    if(time>6 && time<=18 && motionDetect==1){
                        mode=1;
                        action=1;
                    }else if(time>18 && time<=23 && motionDetect==1){
                        mode=2;
                        action=2;
                    }else if(time>=0 && time<=6){
                        mode=3;
                        action=3;
                    }else if(motionDetect==0){
                        mode=4;
                        action=4;
                    }
                    printf("\nAre you cooking (1=Yes) (2=No) : ");
                    scanf("%d", &cooking);

                }else{
                    printf("\nInvalid Room Type.");
                }
            }else{
                printf("\nInvalid Light Level.");
            }
        }else{
            printf("\nInvalid Motion Detected.");
        }
    }else{
        printf("\nInvalid Time.");
    }


    printf("\n------SUMMARY-----");
    switch (mode)
    {
    case 1:
        printf("\nMode=Day");
        break;
    case 2:
        printf("\nMode=Evening");
        break;
    case 3:
        printf("\nMode=Night");
        break;
    case 4:
        printf("\nMode=Away");
        break;
    default:
        break;
    }

    switch (action)
    {
    case 1:
        printf("\nAction=Lights ON");
        break;
    case 2:
        printf("\nAction=Lights DIM");
        break;
    case 3:
        printf("\nAction=Lights OFF");
        break;
    case 4:
        printf("\nAction=All OFF");
        break;
    default:
        break;
    }

    if(cooking==1){
        printf("\nAdditional Action=Turn ON exhaust fans");
    }
    return 0;
}