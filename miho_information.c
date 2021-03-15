#include <stdio.h>

int main()
{
    int miho = 1023;
    int *maho = &miho;
    int **erika = &maho;

    char *mipporin = "mipporin";
    char **saori = &mipporin;
    char ***hana = &saori;

    printf("Miho's birthday: %d\n", miho);
    printf("Maho knows miho's birthday is: %d\n", *maho);
    printf("Erika will ask maho for miho's birthday: %d\n", **erika);

    printf("\nMiho's nickname: %s\n", mipporin);
    printf("Saori calls Miho: %s\n", *saori);
    printf("Hana loves miho's nickname: %s\n", **hana);
    return 0;
}