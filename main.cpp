 #include <iostream>
#include <stdio.h>
#include <stdlib.h> /* �üƬ������ */
#include <time.h> /* �ɶ�������� */
#include <conio.h> //enter�~��
using namespace std;
void game(int);
int main()
{
    cout<<" /////////// Si-Bar-Lar ///////////"<<endl;
    cout<<" start";
    getch();  //��Jenter
    cout<<""<<endl;
    cout<<" host "<<endl;
    int sum,host,gambler;
    srand(time(NULL));//�]�w�üƤ��T�w
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
    //srand( time(NULL));//�]�w�üƤ��T�w
    do{
    //int sum=0; ��ӭ�?
    int dice1 = rand( ) %6+ 1; //�H���ư�6���l��+1
    int dice2 = rand( ) %6+ 1;
    int dice3 = rand( ) %6+ 1;
    int dice4 = rand( ) %6+ 1;
    cout<<"                "<<dice1<<dice2<<dice3<<dice4<<endl ;
    cout<<" "<<endl;
    //�P�_��l�o��
    if(dice1 != dice2 != dice3 != dice4){
    sum = 0; }//�|�ӳ����@��
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
            sum = dice1 + dice2; }//���
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
    sum = dice1+dice2+dice3+dice4;  //�|�Ӥ@��
    }
    cout<<sum<<endl ;
    }while (sum ==0);
    return ;
}
