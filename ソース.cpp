#include <stdio.h>

int main(void)
{
    printf("「!(2>1)」は%dです\n", !(2 > 1));
    printf("「!(1>2)」は%dです\n", !(1 > 2));
    printf("「!(2>1 && 1>2)」は%dです\n", !(2 > 1 && 1 > 2));


    int a = -1;

    if(a<0)

        printf("aの値は負の数ですか\n");

    printf("aの値は%dです\n",a);

    return 0;

}
