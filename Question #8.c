#include <stdio.h>

int main() {
    
    int permissions;

    printf("Enter permissions value: ");
    scanf("%d", &permissions);

    if (permissions & 4) {                          // checking EXECUTE bit (100)
        printf("Access granted: full control\n");
    }
    else {
        if ((permissions & 1) && (permissions & 2)) { // checking READ (001) and WRITE (010)
            printf("Access granted: read and write\n");
        }
        else {
            if ((permissions & 1) && !(permissions & 2)) { // READ but not WRITE
                printf("Access granted: read-only\n");
            }
            else {
                printf("Access denied\n");
            }
        }
    }

    return 0;
}