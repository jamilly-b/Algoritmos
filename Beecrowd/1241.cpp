#include <iostream>

using namespace std;

int main()
{
    int n;
    
    while (cin >> n){
        for (int i = 0; i < n; i++){
            
            string num1, num2;
            cin >> num1 >> num2;
            
            int tam1 = num1.length();
            int tam2 = num2.length();
            
            int k = tam2;
            int iguais = 0;
            
            for(int j = tam1 - 1; j >= (tam1 - tam2); j--){
                if (num1[j] == num2[k-1]){ 
                    iguais += 1;    
                }
                
                k--;
            }
            
            if(iguais == tam2){
                cout << "encaixa" << endl;
            }
            else {
                cout << "nao encaixa" << endl;
            }
        }
    }

    return 0;
}
