#include <iostream>
#include <stdio.h>
#include <stdlib.h> //�üƬ������
#include <time.h>  //�ɶ��������
#include <conio.h> //enter�~��
using namespace std;
void game(void); //�ŧi�Ƶ{��
int sum; //�ŧi���Ʀb�̥~���D�{���P��Ƴ��i�H�Ψ�
int main()
{
    cout<<" /////////// Si-Bar-Lar ///////////"<<endl;
    again: //����ɱq�o��}�l�A�]�@��
    cout<<"��Enter �}�l�C��"<<endl<<endl;
    getch();  //�Ȱ���Jenter
    cout<<"���a"<<endl;
    int host,gambler;
    srand(time(NULL));//�]�w�üƤ��T�w
    game(); //�I�s���
    host = sum; //�Nsum�s��host
    cout<<"���"<<endl;
    game(); //�I�s���
    gambler = sum; //�Nsum�s��gambler
    if(host == gambler){ //�P�_�֪��I�Ƥj
    cout<<"����A����@��"<<endl ;
     goto again;} //goto ���w�^����@��
    else if(host>gambler){
            cout<<"���a�I�Ƹ��j�A���a���"<<endl ;
        }
    else{
        cout<<"����I�Ƹ��j�A������"<<endl ;}
    return 0;
}
void game(void){
    do{
    int dice1 = rand( ) %6+ 1; //�H���ư�6���l��+1
    int dice2 = rand( ) %6+ 1;
    int dice3 = rand( ) %6+ 1;
    int dice4 = rand( ) %6+ 1;
    cout<<"��l�I��:"<<dice1<<dice2<<dice3<<dice4<<endl;
//�P�_��l�o��
    if(dice1==dice4 && dice2==dice4 && dice3==dice4){
    sum = 10*dice1+10*dice2+10*dice3+10*dice4;
    cout<<"Bow-Gi"<<endl;}  //�|�Ӥ@�ˤ��Ƭۥ[
    else if(dice1 == dice2 && dice1 == dice3){
    sum = 0;
    cout<<"����"<<endl;} //3�Ӥ@�ˮ�(4��)
    else if(dice1 == dice2 && dice1 == dice4){
    sum = 0;
    cout<<"����"<<endl;}
    else if(dice1 == dice3 && dice1 == dice4){
    sum = 0;
    cout<<"����"<<endl;}
    else if(dice2 == dice3 && dice2== dice4){
    sum = 0;
    cout<<"����"<<endl;}
    else if((dice1 == dice2) && (dice3 == dice4)){
        if(dice1 > dice3){
            sum = dice1 + dice2; }//���ɤ�j�p(�T��)
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
        sum = dice3+dice4;} //��l��ӼƭȤ@��(�@6��)
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
    else if(dice1 != dice2) //�P�_�|�ӳ����@��
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
                        cout<<"����"<<endl;}
                    }
                }
            }
         }
    }
    cout<<"    �o��:"<<sum<<endl<<endl; //��X�o��
    }while (sum ==0); //do while �p�Gsum����0 ���s����j��
    return ;
}

