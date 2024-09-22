#include <stdio.h>

int main() {
    int waterUnits;
    float totalCost = 0.0;

    // Input: Number of water units consumed
    printf("Enter the number of water units consumed: ");
    scanf("%d", &waterUnits);

    // Calculate total cost based on the tiered pricing structure
    if (waterUnits <= 10) {
        // First 10 units at 150 UGX per unit
        totalCost = waterUnits * 150;
    } else if (waterUnits <= 20) {
        // First 10 units at 150 UGX and next 10 units at 175 UGX per unit
        totalCost = (10 * 150) + ((waterUnits - 10) * 175);
    } else {
        // First 10 units at 150 UGX, next 10 units at 175 UGX, and the rest at 200 UGX per unit
        totalCost = (10 * 150) + (10 * 175) + ((waterUnits - 20) * 200);
    }

    // Output: Total cost before surcharge or VAT
    printf("Total cost for %d water units: %.2f UGX\n", waterUnits, totalCost);

    return 0;
}

