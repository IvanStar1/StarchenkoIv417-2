#include<locale.h>
#include<iomanip> 
#include<bitset>
#include<iostream>
using namespace std;

class matrix {
    private:
    int b;
    int row_size1;
    int column_size1;
    int row_size2;
    int column_size2;
    int **matrix1;
    int **matrix2;
    
    public:
    matrix () {}

void dinamic_matrix(int**& matrix1, int& row_sizw1, int& column_size1){
    cout<<"Вас приветствует программа, специализирующая на произведении и делении матрицы на число!"<<endl;
    this->matrix1=matrix1;
    this->row_size1=row_size1;
    this->column_size1=column_size1;
    cout<<"Введите длину строки:"<<endl;
    cin>>row_size1;
    cout<<"Введите длину столбца:"<<endl;
    cin>>column_size1;
    cout<<"Введите значения матрицы:"<<endl;
    matrix1=new int* [row_size1];
    for (int i=0;i<row_size1;i++){
        matrix1[i]=new int [column_size1];
    }
    for (int i=0;i<row_size1;i++){
        for (int j=0;j<column_size1;j++){
            cin>>matrix1[i][j];
        }
    }
    for (int k=0;k<row_size1;k++){
        for(int l=0;l<column_size1;l++){
            cout<<matrix1[k][l]<<"\t";
        }
    cout<<endl;
    }
    
}
void decision(int**& matrix1, int**& matrix2, int& row_size1, int& column_size1,int& row_size2, int& column_size2, int& b){
    this->matrix1=matrix1;
    this->matrix2=matrix2;
    this->row_size1=row_size1;
    this->column_size1=column_size1;
    this->row_size2=row_size2;
    this->column_size2=column_size2;
    this->b=b;
    cout<<"Подключилась функция для умножения и деления матрицы на число"<<endl;
    cout<<"Введите множитель"<<endl;
    cin>>b;
    cout<<"Введите размер матрицы, равный размеру первой матрицы"<<endl;
    cin>>row_size2;
    cin>>column_size2;
    cout<<"Умножение"<<endl;
    matrix2=new int* [row_size2];
    for(int i=0;i<row_size2;i++){
        matrix2[i]=new int [column_size2];
        for(int j=0;j<column_size2;j++){
            matrix2[i][j]=matrix1[i][j]*b;
            cout<<matrix2[i][j]<<"\t";
        }
    cout<<endl;
    }
    cout<<"Деление"<<endl;
    for(int i=0;i<row_size2;i++){
        for(int j=0;j<column_size2;j++){
            matrix2[i][j]=matrix1[i][j]/b;
            cout<<matrix2[i][j]<<"\t";
        }
    cout<<endl;
    }


}
    
    
~matrix () {};    
    
};


int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Реализация через классы"<<endl;
    int b;
    int row_size1;
    int column_size1;
    int row_size2;
    int column_size2;
    int **matrix1;
    int **matrix2;
    matrix a;
    a.dinamic_matrix(matrix1, row_size1,column_size1);
    a.decision(matrix1, matrix2, row_size1, column_size1,row_size2, column_size2, b);
    


system("pause");
return 0 ;
}
