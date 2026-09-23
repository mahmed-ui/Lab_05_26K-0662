#include <stdio.h>

int main() {
    
    float accuracy, confidence;
    long datasetsize;
    int role, statusFlags;
    float modelScore, sizeFactor, avgAccConf;

    printf("Enter accuracy (0-100): ");
    scanf("%f", &accuracy);

    printf("Enter confidence score (0-100): ");
    scanf("%f", &confidence);

    printf("Enter dataset size (number of samples): ");
    scanf("%ld", &datasetsize);

    printf("Enter user role (1=Intern, 2=Engineer, 3=Admin): ");
    scanf("%d", &role);

    printf("Enter status flags (bitwise: 1=TRAINED, 2=VALIDATED, 4=APPROVED, 8=DEPRECATED): ");
    scanf("%d", &statusFlags);

    sizeFactor = (float)datasetsize / 1000.0;
    if (sizeFactor > 10.0) {
        sizeFactor = 10.0;   
    }

    modelScore = (accuracy*0.5) + (confidence*0.3) + (sizeFactor*2);

    printf("\nModel Score: %.2f\n", modelScore);

    if (statusFlags & 8){
        printf("Rejected: model deprecated\n");
    }
    else if (!(statusFlags & 1)){
        printf("Rejected: not trained\n");
    }
    else if (!(statusFlags & 2)){
        printf("Rejected: not validated\n");
    }
    else if (!(statusFlags & 4)){
        printf("Pending: awaiting approval\n");
    }
    else if (accuracy<70 || confidence<60){
        printf("Rejected: performance too low\n");
    }
    else if (datasetsize<5000){
        printf("Rejected: dataset too small\n");
    }
    else if (role==1){
        printf("Denied: interns cannot deploy\n");
    }
    else if (role==2 && modelScore<80){
        printf("Denied: engineer needs higher score\n");
    }
    else{
        printf("Approved for deployment\n");
    }

    printf("\n--- Variable Sizes (bytes) ---\n");
    printf("sizeof(accuracy)     = %zu\n", sizeof(accuracy));
    printf("sizeof(confidence)   = %zu\n", sizeof(confidence));
    printf("sizeof(datasetsize) = %zu\n", sizeof(datasetsize));
    printf("sizeof(role)         = %zu\n", sizeof(role));
    printf("sizeof(statusFlags)  = %zu\n", sizeof(statusFlags));
    printf("sizeof(modelScore)   = %zu\n", sizeof(modelScore));

    avgAccConf = (accuracy+confidence)/2.0;
    printf("\nAverage of accuracy and confidence = %.2f\n", avgAccConf);

    if (modelScore>avgAccConf) {
        printf("Model score is above the average of accuracy and confidence.\n");
    } else {
        printf("Model score is not above the average of accuracy and confidence.\n");
    }

    return 0;
}

