#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the x and y values: ");
    scanf("%d%d", &x, &y);

    if (x == 1) {
        y = x + 1;
        printf("%d", y);
    }
    else if (x == 2 || x == 3 || x == 4) {
        y++;
        printf("%d", y);
    }
    else if (x == 5) {
        y--;
        printf("%d", y);
    }
    else if (x == 6) {
        y = 0;
        printf("%d", y);
    }
    else {
        printf("No condition matched");
    }

    return 0;
}

