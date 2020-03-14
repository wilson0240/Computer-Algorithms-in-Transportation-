#include <iostream>
#include <stdio.h>
#include <stdlib.h> /* 亂數相關函數 */
#include <time.h> /* 時間相關函數 */
using namespace std;

int main()
{
    cout<<" /////////// Si-Bar-Lar ///////////"<<endl;
    int sum;
    do{
    //srand( time(NULL)); //設定亂數不固定
    int dice1 = rand( ) %6+ 1; //隨機數除6的餘數+1
    int dice2 = rand( ) %6+ 1;
    int dice3 = rand( ) %6+ 1;
    int dice4 = rand( ) %6+ 1;
    cout<<"                "<<dice1<<dice2<<dice3<<dice4<<endl ;
    cout<<" "<<endl;
    system("pause");

    //判斷骰子得分
    if(dice1 == dice2 == dice3 == dice4){
    sum = dice1+dice2+dice3+dice4;
    }
    if(dice1 == dice2 == dice3||dice1 == dice2 == dice4||dice1 == dice3 == dice4||dice2 == dice3 == dice4){
    sum = 0;
    }
    if(dice1 != dice2 != dice3 != dice4){
    sum = 0;
    }
    if(){
    sum = dicei+dicej;
    }
    if(){
        dicei+ dicej > dicek+ dicel

    }

    }while(sum=0);
    return 0;
}
