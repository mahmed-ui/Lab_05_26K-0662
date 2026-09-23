#include <stdio.h>

int main() {
    int category, subType, delayed;

    printf("Choose a category:\n");
    printf("1 = Greeting\n2 = Query\n3 = Complaint\n4 = Feedback\n");
    printf("Enter choice: ");
    scanf("%d", &category);

    switch (category) {
        case 1:
            printf("Choose sub-type:\n1 = Morning\n2 = Evening\nEnter choice: ");
            scanf("%d", &subType);

            switch (subType) {
                case 1:
                    printf("Bot: Good morning! Hope you have a great day ahead.\n");
                    break;
                case 2:
                    printf("Bot: Good evening! How can I help you tonight?\n");
                    break;
                default:
                    printf("Invalid selection.\n");
            }
            break;

        case 2:
            printf("Choose sub-type:\n1 = Product\n2 = Billing\n3 = Technical\nEnter choice: ");
            scanf("%d", &subType);

            switch (subType) {
                case 1:
                    printf("Bot: Let me pull up the product details for you.\n");
                    break;
                case 2:
                    printf("Bot: I can help you with your billing question.\n");
                    break;
                case 3:
                    printf("Bot: Connecting you to technical support.\n");
                    break;
                default:
                    printf("Invalid selection.\n");
            }
            break;

        case 3:
            printf("Choose sub-type:\n1 = Delivery\n2 = Quality\nEnter choice: ");
            scanf("%d", &subType);

            switch (subType) {
                case 1:
                    printf("Is your order delayed? (1=Yes/0=No): ");
                    scanf("%d", &delayed);

                    if (delayed == 1) {
                        printf("Bot: We're very sorry for the delay in your delivery. We're escalating this immediately.\n");
                    } else if (delayed == 0) {
                        printf("Bot: We're sorry for the inconvenience with your delivery. Let us know how we can help.\n");
                    } else {
                        printf("Invalid selection.\n");
                    }
                    break;
                case 2:
                    printf("Bot: We apologize for the quality issue. We'll arrange a replacement or refund.\n");
                    break;
                default:
                    printf("Invalid selection.\n");
            }
            break;

        case 4:
            printf("Choose sub-type:\n1 = Positive\n2 = Negative\nEnter choice: ");
            scanf("%d", &subType);

            switch (subType) {
                case 1:
                    printf("Bot: Thank you so much for the positive feedback!\n");
                    break;
                case 2:
                    printf("Bot: We're sorry to hear that. Your feedback helps us improve.\n");
                    break;
                default:
                    printf("Invalid selection.\n");
            }
            break;

        default:
            printf("Invalid selection.\n");
    }

    return 0;
}