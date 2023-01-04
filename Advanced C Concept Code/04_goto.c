#include<stdio.h>

int main() {
    label:
        printf("We are inside label\n");
        goto end;

    printf("Hello World\n");
    goto label;

    end:
        printf("We are outside label\n");

    int n;
    for (int i = 0; i < 8; i++) {
        printf("%d\n", i);

        for (int j = 0; j < 8; j++) {
            printf("Enter a number. Enter 0 to exit()\n");
            scanf("%d", &n);
            if (!n)
                goto super_end;
        }
    }
    
    super_end:

    return 0;
}