#include <iostream>

using namespace std;

void Quadruples(string input_exp[], int n){
    cout << "\n\n\tQUADRUPLES\n==================================\nop\t arg1\t arg2\t result\n";
    cout << "==================================";
    for (int i=0; i<n; i++){
        cout << "\n" << input_exp[i][3] << "\t  " << input_exp[i][2] << "\t  " << input_exp[i][4] << "\t  " << input_exp[i][0];    
    }
    cout << "\n----------------------------------\n";
}

void Triples(string input_exp[], int n){
    cout << "\n\n\tTRIPLES\n==================================\nop\t arg1\t arg2\n";
    cout << "==================================";
    for (int i = 0; i < n; i++)
    {
        cout << "\n"
             << input_exp[i][3] << "\t  " << input_exp[i][2] << "\t  " << input_exp[i][4];
    }
    cout << "\n----------------------------------";
}


int main(){
    int n;
    string input_exp[20];
    cout << "Enter the number of expressions: "; cin >> n;
    cout << "Enter " << n << " number of expressions: \n"; 
    for (int i=0; i<n; i++)
    {
        cin >> input_exp[i];
    }

    Quadruples(input_exp, n);
    Triples(input_exp, n);
    

    return 0;
}