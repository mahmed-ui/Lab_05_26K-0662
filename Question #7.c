#include <stdio.h>

int main() {
    
    int stream, interest, medicine;

    printf("Choose your stream:\n");
    printf("1 = Science\n2 = Commerce\n3 = Arts\n");
    printf("Enter choice: ");
    scanf("%d", &stream);

    switch (stream) {

        case 1:
            printf("Choose your interest:\n1 = Biology\n2 = Physics\n3 = Chemistry\nEnter choice: ");
            scanf("%d", &interest);

            switch (interest) {
                case 1:
                    printf("Are you interested in medicine? (1=Yes/0=No): ");
                    scanf("%d", &medicine);

                    if (medicine == 1) {
                        printf("Recommended Course: MBBS\n");
                    } else if (medicine == 0) {
                        printf("Recommended Course: Biotechnology\n");
                    } else {
                        printf("Invalid choice.\n");
                    }
                    break;
                case 2:
                    printf("Recommended Course: B.Sc Physics / Engineering\n");
                    break;
                case 3:
                    printf("Recommended Course: B.Sc Chemistry\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;

        case 2:
            printf("Choose your interest:\n1 = Accounting\n2 = Marketing\nEnter choice: ");
            scanf("%d", &interest);

            switch (interest) {
                case 1:
                    printf("Recommended Course: B.Com / CA (Chartered Accountancy)\n");
                    break;
                case 2:
                    printf("Recommended Course: BBA Marketing\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;

        case 3:
            printf("Choose your interest:\n1 = Literature\n2 = History\n3 = Psychology\nEnter choice: ");
            scanf("%d", &interest);

            switch (interest) {
                case 1:
                    printf("Recommended Course: BA Literature\n");
                    break;
                case 2:
                    printf("Recommended Course: BA History\n");
                    break;
                case 3:
                    printf("Recommended Course: BA/BSc Psychology\n");
                    break;
                default:
                    printf("Invalid choice.\n");
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

