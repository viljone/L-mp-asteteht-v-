#include <stdio.h>

int main()
{
    char m;
    printf("Anna merkki\n");
    scanf("%c",&m);
    printf("Annoit merkin %c\n",m);

    float ca;
    float fa;

    printf("Anna lampotila celciusasteina!!!\n");
    scanf("%f",&ca);
    fa=1.8*ca+32;
    printf("Antamasi lampotila %.1f on Fahrenheit asteina %.1f\n",ca,fa);

    return 0;

}
