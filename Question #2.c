#include <stdio.h>

int main(){

    int marks,percentattendance,familyIncome,typeScholarship=0;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    printf("Enter your percentage: ");
    scanf("%d", &percentattendance);

    printf("Enter your family income: ");
    scanf("%d", &familyIncome);

    if(marks>=0 && marks<=100){
        if(percentattendance>=0 && percentattendance<=100){
            if(familyIncome>=0){
                if(marks<50){
                    printf("Not Eligible, marks too low");
                }else if(percentattendance<75){
                    printf("Not Eligible, attendance too low");
                }else if(familyIncome>800000){
                    printf("Not Eligible, income too high");
                }else{
                    if(marks>=90 && percentattendance>=90){
                        typeScholarship=1;
                    }else if(marks>=75 && percentattendance>=85){
                        typeScholarship=2;
                    }else{
                        typeScholarship=3;
                    }

                    switch (typeScholarship){
                        case 0: printf("No Schlarship");
                        break;
                        case 1: printf("Full Scholarship");
                        break;
                        case 2: printf("Half Scholarship");
                        break;
                        case 4: printf("Quarter Scholarship");
                        break;
                    }

                }

            }else{
                printf("Family income not valid");
            }

        }else{
            printf("Attendance percentage not valid");
        }

    }else{
        printf("Marks not valid");
    }

    return 0;

}

