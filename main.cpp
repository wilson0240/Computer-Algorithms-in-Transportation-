#include <iostream>
#include <stdio.h>
#include <stdlib.h> /* �üƬ������ */
#include <time.h>
using namespace std;

int main()
{
    srand( time(NULL));
   int a;
   for(a=1;a<=4;a++){
    /* ���w�üƽd�� */
   int min = 1;
   int max = 6;

    /* ���� [min , max] ����ƶü� */
   int a = rand() % (max - min + 1) + min;

    printf("a = %d\n", a);
   }
    return 0;
}
