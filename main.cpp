 #include <iostream>
#include <stdio.h>
#include <stdlib.h> /* 亂數相關函數 */
#include <time.h> /* 時間相關函數 */
#include <conio.h> //enter繼續
using namespace std;
void game(int);
int main()
{
    cout<<" /////////// Si-Bar-Lar ///////////"<<endl;
    cout<<" start";
    getch();  //輸入enter
    cout<<""<<endl;
    cout<<" host "<<endl;
    int sum,host,gambler;
    srand(time(NULL));//設定亂數不固定
    game(sum);
    host = sum;
    cout<<sum;
    cout<<" a gambler"<<endl;
    game(sum);
    gambler = sum;
    cout<<gambler;
    int hostsum,gamblersum;
    if(hostsum>gamblersum){
         cout<<"host win"<<endl ;
    }
    else{
         cout<<"gambler win"<<endl ;
    }
    return sum;
}
void game(int sum){
    //int sum;
    //srand( time(NULL));//設定亂數不固定
    do{
    //int sum=0; 兩個值?
    int dice1 = rand( ) %6+ 1; //隨機數除6的餘數+1
    int dice2 = rand( ) %6+ 1;
    int dice3 = rand( ) %6+ 1;
    int dice4 = rand( ) %6+ 1;
    cout<<"                "<<dice1<<dice2<<dice3<<dice4<<endl ;
    cout<<" "<<endl;
    //判斷骰子得分
    if(dice1 != dice2 != dice3 != dice4){
    sum = 0; }//四個都不一樣
    if(dice1 == dice2){
        sum = dice1+dice2;}
    if(dice1 == dice3){
        sum = dice1+dice3;}
    if(dice1 == dice4){
        sum = dice1+dice4;}
    if(dice2 == dice3){
        sum = dice2+dice3;}
    if(dice2 == dice4){
        sum = dice2+dice4;}
    if(dice3 == dice4){
        sum = dice3+dice4;}
    if((dice1 == dice2) && (dice3 == dice4)){
        if(dice1 > dice3){
            sum = dice1 + dice2; }//兩對
        else{
            sum = dice3 + dice4; }
    }
    if((dice1 == dice3) && (dice2 == dice4)){
        if(dice1 > dice2){
            sum = dice1 + dice3;}
        else{
            sum = dice2 + dice4;}
    }
    if((dice1 == dice4) && (dice2 == dice3)){
        if(dice1 > dice2){
            sum = dice1 + dice4;}
        else{
            sum = dice2 + dice3;}
    }
    if(dice1 == dice2 && dice1 == dice3){
    sum = 0; }
    if(dice1 == dice2 && dice1 == dice4){
    sum = 0; }
    if(dice1 == dice3 && dice1 == dice4){
    sum = 0; }
    if(dice2 == dice3 && dice2== dice4){
    sum = 0; }
    if(dice1==dice4 && dice2==dice4 && dice3==dice4){
    sum = dice1+dice2+dice3+dice4;  //四個一樣
    }
    cout<<sum<<endl ;
    }while (sum ==0);
    return ;
}
