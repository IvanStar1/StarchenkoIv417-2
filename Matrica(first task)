#include<locale.h>
#include<iomanip> 
#include<bitset>
#include<iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите матрицу"<<endl;
    int matrix1[3][3], matrix2[3][3],a=3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> matrix1[i][j];
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<matrix1[i][j]<<"\t";
        }
    cout << endl;  
    }
    cout<<"Результат умножения матрицы на число"<<endl;
     for ( int k=0; k<3; k++)
    {
        for (int l = 0; l < 3; l++){
            matrix2[k][l]=matrix1[k][l]*a;
            cout<<matrix2[k][l]<<"\t";
        }
    cout << endl;
    }
    cout<<"Результат деления матрицы на число"<<endl;
    for ( int m=0; m<3; m++)
    {
        for (int n = 0; n < 3; n++){
            matrix2[m][n]=matrix1[m][n]/a;
            cout<<matrix2[m][n]<<"\t";
        }
    cout << endl;
    }

system("pause");
return 0 ;
}
