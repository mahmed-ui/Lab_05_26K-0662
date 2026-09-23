#include <stdio.h>

int main() {
    
    int permissions;

    printf("Enter permissions value: ");
    scanf("%d", &permissions);

    if (permissions & 16) {
        printf("Full access: admin\n");
    }
    else if ((permissions & 8) && (permissions & 2)) {
        printf("Access: delete and write\n");
    }
    else if ((permissions & 4) && !(permissions & 2)) {
        printf("Access: execute only\n");
    }
    else if ((permissions & 1) && !(permissions & 2) && !(permissions & 4)) {
        printf("Access: read-only\n");
    }
    else if (permissions == 0) {
        printf("Access denied\n");
    }
    else {
        printf("Access: custom permissions\n");
    }

    printf("\n--- Bits detected ---\n");
    if (permissions & 1)  printf("READ\n");
    if (permissions & 2)  printf("WRITE\n");
    if (permissions & 4)  printf("EXECUTE\n");
    if (permissions & 8)  printf("DELETE\n");
    if (permissions & 16) printf("ADMIN\n");

    if (permissions == 0) {
        printf("(none)\n");
    }

    return 0;
}

