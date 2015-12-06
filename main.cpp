//this is new file!
//this is new 222!

#include <iostream>
#include <fstream>
#include<iomanip>

//{"lst":[{"ID":"1","nm":"ÁÉÄþYM2300","Mileage":"20","speed":"5","stop":"10"},

using namespace std;

#define START_TIME 1447404281
#define START_LONGI 123.38333
#define START_LATI 41.80000
#define MAX_NUM 20

int main()
{
    double longi=START_LONGI;
    double lati=START_LATI;
    ofstream ofs;
    ofs.open("src_recall.action");
    ofs<<"{\"lst\":[";
    for(int i=0;i<MAX_NUM;i++){
        ofs<<"{\"ID\":\""<<i+1<<"\",\"nm\":\"YM2300\",\"time\":\""<<START_TIME+i*5
        <<"\",\"longitude\":\""<<setprecision(8)<<longi<<"\",\"latitude\":\""<<setprecision(8)<<lati<<"\"}";
        if(i!=(MAX_NUM-1))
            ofs<<",";
        longi+=0.0003*(rand()%21-10);
        //lati+=0.0003*(rand()%21-10);
    }
    ofs<<"]}";
    ofs.close();
    return 0;
}
