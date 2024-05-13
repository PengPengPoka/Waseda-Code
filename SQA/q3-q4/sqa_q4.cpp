#include <iostream>
#include <math.h>
using namespace std;

bool score(int act, float gpa){
    if((act <= 36 && gpa <= 4.0) && (10 * gpa + act >= 71)){
        return true;
    }
    else{
        return false;
    }
}

int main(void){
    int act;
    float gpa;

    cout << "act: ";
    cin >> act;
    cout << "gpa: ";
    cin >> gpa;

    gpa = roundf(gpa*10)/10;

    bool result = score(act,gpa);
    if(result==true){
        printf("OK");
    }
    else{
        printf("NG");
    }
}