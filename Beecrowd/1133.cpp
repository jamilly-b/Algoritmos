#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    for(int i = a + 1; b > i; i++){
        if(i % 5 == 2 || i % 5 == 3){
            cout << i << endl;
        }
    }
    return 0;
}
