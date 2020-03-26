#include <iostream>
#include <stdio.h>
#include <stdlib.h> //亂數相關函數
#include <time.h>  //時間相關函數
#include <conio.h> //enter繼續
using namespace std;
void game(void); //宣告副程式
int sum; //宣告分數在最外面主程式與函數都可以用到
int main()
{
    cout<<" /////////// Si-Bar-Lar ///////////"<<endl;
    again: //平手時從這邊開始再跑一次
    cout<<"按Enter 開始遊戲"<<endl<<endl;
    getch();  //暫停輸入enter
    cout<<"莊家"<<endl;
    int host,gambler;
    srand(time(NULL));//設定亂數不固定
    game(); //呼叫函數
    host = sum; //將sum存到host
    cout<<"賭客"<<endl;
    game(); //呼叫函數
    gambler = sum; //將sum存到gambler
    if(host == gambler){ //判斷誰的點數大
    cout<<"平手，重骰一次"<<endl ;
     goto again;} //goto 指定回到哪一行
    else if(host>gambler){
            cout<<"莊家點數較大，莊家獲勝"<<endl ;
        }
    else{
        cout<<"賭客點數較大，賭客獲勝"<<endl ;}
    return 0;
}
void game(void){
    do{
    int dice1 = rand( ) %6+ 1; //隨機數除6的餘數+1
    int dice2 = rand( ) %6+ 1;
    int dice3 = rand( ) %6+ 1;
    int dice4 = rand( ) %6+ 1;
    cout<<"骰子點數:"<<dice1<<dice2<<dice3<<dice4<<endl;
//判斷骰子得分
    if(dice1==dice4 && dice2==dice4 && dice3==dice4){
    sum = 10*dice1+10*dice2+10*dice3+10*dice4;
    cout<<"Bow-Gi"<<endl;}  //四個一樣分數相加
    else if(dice1 == dice2 && dice1 == dice3){
    sum = 0;
    cout<<"重骰"<<endl;} //3個一樣時(4種)
    else if(dice1 == dice2 && dice1 == dice4){
    sum = 0;
    cout<<"重骰"<<endl;}
    else if(dice1 == dice3 && dice1 == dice4){
    sum = 0;
    cout<<"重骰"<<endl;}
    else if(dice2 == dice3 && dice2== dice4){
    sum = 0;
    cout<<"重骰"<<endl;}
    else if((dice1 == dice2) && (dice3 == dice4)){
        if(dice1 > dice3){
            sum = dice1 + dice2; }//兩對時比大小(三種)
        else{
            sum = dice3 + dice4; }
    }
    else if((dice1 == dice3) && (dice2 == dice4)){
        if(dice1 > dice2){
            sum = dice1 + dice3;}
        else{
            sum = dice2 + dice4;}
    }
    else if((dice1 == dice4) && (dice2 == dice3)){
        if(dice1 > dice2){
            sum = dice1 + dice4;}
        else{
            sum = dice2 + dice3;}
    }
    else if(dice1 == dice2){
        sum = dice3+dice4;} //骰子兩個數值一樣(共6種)
    else if(dice1 == dice3){
        sum = dice2+dice4;}
    else if(dice1 == dice4){
        sum = dice2+dice3;}
    else if(dice2 == dice3){
        sum = dice1+dice4;}
    else if(dice2 == dice4){
        sum = dice1+dice3;}
    else if(dice3 == dice4){
        sum = dice1+dice2;}
    else if(dice1 != dice2) //判斷四個都不一樣
    {
     if(dice1 != dice3)
        {
         if(dice1 != dice4)
            {
             if(dice2 != dice3)
                {
                 if(dice2 != dice4)
                    {
                    if(dice3 != dice4)
                        {sum = 0;
                        cout<<"重骰"<<endl;}
                    }
                }
            }
         }
    }
    cout<<"    得分:"<<sum<<endl<<endl; //輸出得分
    }while (sum ==0); //do while 如果sum等於0 重新執行迴圈
    return ;
}

