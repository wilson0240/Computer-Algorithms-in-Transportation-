#include <iostream>
#include <stdio.h>
#include <stdlib.h> /* �üƬ������ */
#include <time.h> /* �ɶ�������� */
using namespace std;

int main()
{
    cout<<" /////////// Si-Bar-Lar ///////////"<<endl;
    int sum;
    do{
    //srand( time(NULL)); //�]�w�üƤ��T�w
    int dice1 = rand( ) %6+ 1; //�H���ư�6���l��+1
    int dice2 = rand( ) %6+ 1;
    int dice3 = rand( ) %6+ 1;
    int dice4 = rand( ) %6+ 1;
    cout<<"                "<<dice1<<dice2<<dice3<<dice4<<endl ;
    cout<<" "<<endl;
    system("pause");

    //�P�_��l�o��
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
