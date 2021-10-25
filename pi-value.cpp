#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
    float x;
    float y;
    double datos=1000000000;
    double cont=0;
    for(int j=0; j<datos;j++){
        x=drand48()*2-1;
        y=drand48()*2-1;
        if(x*y+y*x<1) cont ++;
    };

    double res = cont/datos*4;

    cout<<"Pi vale: "<<res <<endl;

    return 0;
}