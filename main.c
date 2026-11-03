#include <stdio.h>

int main()
{
    int light;

    printf("Enter Light Intensity (0-1023): ");
    scanf("%d", &light);

    if (light < 0 || light > 1023)
    {
        printf("Invalid Light Intensity\n");
    }
    else if (light < 300)
    {
        printf("Dark Environment - Street Light ON\n");
    }
    else
    {
        printf("Bright Environment - Street Light OFF\n");
    }

    return 0;
}
