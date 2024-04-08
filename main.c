#include "functions.h"

int main() {
    int size;
    puts("Input number of circles: ");
    scanf("%d", &size);
    struct array arr = initializeArray(size);
    float radiusToFind;
    puts("Input radius to find: ");
    scanf("%f", &radiusToFind);
    printByRadius(radiusToFind, arr);
    return 0;
}
