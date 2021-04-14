#include<iostream>
#include<fstream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main(){
    //get data into the vector
    fstream fs("file.in", fstream::in);
    char read[100];
    fs.getline(read, 100);
    int total = atoi(read);
    vector<int> weight(total, 0);
    int i = 0;
    while(fs.getline(read, 100)){
        weight.at(i) = atoi(read);
        i++;
    }
    fs.close();

    //calculate and print
    sort(weight.begin(), weight.end());
    int max = 0;
    for(int i=total-1; i>total-6; i--) max = max + weight.at(i);
    cout << max << endl;

    return 0;
}

