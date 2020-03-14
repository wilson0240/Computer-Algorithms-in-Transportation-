#include <iostream>
#include <stdio.h>
#include <stdlib.h> /* 亂數相關函數 */
#include <time.h>
using namespace std;

int main()
{
    srand( time(NULL));
   int a;
   for(a=1;a<=4;a++){
    /* 指定亂數範圍 */
   int min = 1;
   int max = 6;

    /* 產生 [min , max] 的整數亂數 */
   int a = rand() % (max - min + 1) + min;

    printf("a = %d\n", a);
   }
    return 0;
}
