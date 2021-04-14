#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cstdlib>
#include"playerdata.h"
using namespace std;

int main(){

    //get the file name and open the file
    string filename;
    FILE *rf;
    while(1>0){
        cout << "Please enter the filename: ";
        cin >> filename;
        rf = fopen( filename.c_str(), "r");
        if(rf == NULL) cout << "Cannot find the file. \n";
        else break;
    }

    //get K, Ra, Rb
    char test[100];
    fgets(test, 100, rf);
    char *pch;
    pch = strtok(test, " ");
    int K, Ra, Rb;
    K = atoi(pch);
    pch = strtok(NULL, " ");
    Ra = atoi(pch);
    pch = strtok(NULL, " ");
    Rb = atoi(pch);
    
    //initialize data
    PlayerData play(K, Ra, Rb);
    
    //make the file.out
    FILE *wf;
    wf = fopen( "file.out", "w");
    fprintf(wf, "%d %d\n", Ra, Rb);
    while(fgets(test, 10, rf) != NULL){
        play.returnValue(atof(test));
        fprintf(wf, "%d %d\n", play.getRa(), play.getRb());
    }

    fclose(rf);
    fclose(wf);

    cout << "The file file.out has been built.\n";

    return 0;
}
