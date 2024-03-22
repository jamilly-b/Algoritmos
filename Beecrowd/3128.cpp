#include <iostream>
using namespace std;

int main()
{
    int idade1, idade2;
    cin >> idade1 >> idade2;
    
    if(idade1 >= 6 && idade2 >= 6){
        if(idade1 >= 18 || idade2 >= 18){
            cout << "YES" << endl;
        }
        else if(idade1 >= 14 && idade2 >= 14){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else {
        cout << "NO" << endl;
    }
    
    return 0;
}
