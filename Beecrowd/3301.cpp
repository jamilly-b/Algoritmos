#include <iostream>
using namespace std;

int main()
{
    int H, Z, L;
    
    cin >> H >> Z >> L;
    
    if(H > Z && H < L || H < Z && H > L){
        cout << "huguinho" << endl;
    }
    else if(Z > H && Z < L || Z < H && Z > L){
        cout << "zezinho" << endl;
    }
    else if(L > H && L < Z || L < H && L > Z){
        cout << "luisinho" << endl;
    }

    return 0;
}
