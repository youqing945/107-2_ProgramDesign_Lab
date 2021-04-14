#include"MinoN.h"
char N_arr[2][4][4]={{{'0', '0', '0', '0'},
                      {'0', '0', '1', '0'},
                      {'0', '1', '1', '0'},
                      {'0', '1', '0', '0'}},
                     {{'0', '0', '0', '0'},
                      {'0', '0', '0', '0'},
                      {'0', '1', '1', '0'},
                      {'0', '0', '1', '1'}}};
MinoN::MinoN():Mino(1){}
void MinoN::paint(){
    for(int i=0; i<4; ++i){
        for(int j=0; j<4; ++j) cout<<N_arr[rotate_index][i][j];
        cout<<endl;
    }
}
