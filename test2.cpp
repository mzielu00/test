#include <stdio.h>

int main(void)
{
    unsigned char aucArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    unsigned char *pucPtr1;
    unsigned short *pusPtr2;
    unsigned int *puiPtr3;

    printf("sizeof(unsigned char) : %d\n", sizeof(unsigned char));
    printf("sizeof(unsigned short) : %d\n", sizeof(unsigned short));
    printf("sizeof(unsigned int) : %d\n", sizeof(unsigned int));

    pucPtr1 = &aucArray[7];

    printf("1 : 0x%X\n", *pucPtr1);

    pucPtr1 = aucArray + 3;

    printf("2 : 0x%X\n", *pucPtr1);

    pucPtr1 = aucArray;
    pusPtr2 = (unsigned short *)aucArray;
    puiPtr3 = (unsigned int *)aucArray;

    printf("3 : 0x%X\n", *pucPtr1);
    printf("4 : 0x%X\n", *pusPtr2);
    printf("5 : 0x%X\n", *puiPtr3);

    pucPtr1++;
    pusPtr2++;
    puiPtr3++;

    printf("6 : 0x%X\n", *pucPtr1);
    printf("7 : 0x%X\n", *pusPtr2);
    printf("8 : 0x%X\n", *puiPtr3);

    return 0;
}