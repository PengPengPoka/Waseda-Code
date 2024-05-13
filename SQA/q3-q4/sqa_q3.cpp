#include <iostream>
using namespace std;

int main(void){
    int x,y;

    cout << "insert x: ";
    cin >> x;
    cout << "insert y: ";
    cin >> y;

    int z = 0;
    if(x > 0 && y > 0){
        z = 100;
    }

    printf("z value value {%d}",z);
}