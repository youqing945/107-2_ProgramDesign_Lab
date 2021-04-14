#include"playerdata.h"
#include<cmath>

PlayerData::PlayerData(int s1, int s2, int s3){
    setK(s1);
    setRa(s2);
    setRb(s3);
}
void PlayerData::returnValue(float resulta){
    float Ea = 1/(1 + pow(10, (float)(getRb()-getRa())/400));
    float Eb = 1/(1 + pow(10, (float)(getRa()-getRb())/400));
    Ea = round((float)(resulta-Ea)*(float)getK()+getRa());
    Eb = round((float)(1-resulta-Eb)*(float)getK()+getRb());
    setRa(Ea);
    setRb(Eb);
}

int PlayerData::getK() { return K; }
void PlayerData::setK(int n) { K = n; }
int PlayerData::getRa() { return Ra; }
void PlayerData::setRa(int n) { Ra = n; }
int PlayerData::getRb() { return Rb; }
void PlayerData::setRb(int n) { Rb = n; }
