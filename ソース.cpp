#include <stdio.h>

int main(void)
{
    printf("�u!(2>1)�v��%d�ł�\n", !(2 > 1));
    printf("�u!(1>2)�v��%d�ł�\n", !(1 > 2));
    printf("�u!(2>1 && 1>2)�v��%d�ł�\n", !(2 > 1 && 1 > 2));


    int a = -1;

    if(a<0)

        printf("a�̒l�͕��̐��ł���\n");

    printf("a�̒l��%d�ł�\n",a);

    return 0;

}
