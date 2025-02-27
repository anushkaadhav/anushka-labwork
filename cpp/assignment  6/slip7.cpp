#include<iostream>
using namespace std;
class Matrix
{
    private:
       int rows,cols;
       int mat[10][10];
       public:
         void setsize(int r,int c);
         void acceptmatrix();
         void displaymatrix();
         int getrows();
         int getcols();
         Matrix operator-();
        Matrix operator*(const Matrix &m);
 };
 void Matrix::setsize(int r, int c)
 {
   rows=r;
   cols=c;
   }
   void Matrix::acceptmatrix()
   {
     cout<<"\nenter elements of"<<rows<<"x"<<cols<<"matrix:";
     for(int i=0;i<rows;i++)
     {
       for (int j=0;j<cols;j++)
          cin>>mat[i][j];
        }
   }
   void Matrix::displaymatrix()
   {
       for(int i=0;i<rows;i++)
     {
       for (int j=0;j<cols;j++)
          cout<<mat[i][j]<<" ";
        cout<<endl;
     }
 }
 int Matrix::getrows()
 {
  return rows;
}
int Matrix::getcols()
 {
  return cols;
}
Matrix Matrix::operator-()
{
     Matrix temp;
     temp.rows=cols;
     temp.cols=rows;
    for(int i=0;i<rows;i++)
     {
       for (int j=0;j<cols;j++)
          {
              temp.mat[j][i]=mat[i][j];
           }
     }
     return temp;
}
Matrix Matrix::operator*(const Matrix &m)
{
  Matrix result;
  if(cols!=m.rows)
   {
      cout<<"error :matrix multiplication not possible:";
      result.rows=result.cols=0;
        return result;
      }
      result.rows=rows;
      result.cols=m.cols;
    for(int i=0;i<result.rows;i++)
     {
       for (int j=0;j<result.cols;j++)
           {
              result.mat[i][j]=0;
              for(int k=0;k<cols;k++)
                  result.mat[i][j] +=mat[i][k]*m.mat[k][j];
             }
         }
         return result;
   }
   int main()
   {
      int r1,c1,r2,c2;
      cout<<"\nenter rows and colmnsfor matrix 1:";
      cin>>r1>>c1;
      Matrix mat1;
      mat1.setsize(r1,c1);
      mat1.acceptmatrix();
      
     cout<<"\nenter rows and colmnsfor matrix 2:";
      cin>>r2>>c2;
      Matrix mat2;
      mat2.setsize(r2,c2);
      mat2.acceptmatrix();
      
      cout<<"\nMatrix 1:\n";
         mat1.displaymatrix();
       cout<<"\nMatrix 2:\n";
         mat2.displaymatrix();
            
            Matrix transposed=-mat1;
            cout<<"\ntranspose pf matrix 1:\n";
            transposed.displaymatrix();
            
            Matrix multiplied=mat1*mat2;
            if(multiplied.getrows()>0 && multiplied.getrows()>0)
            {
               cout<<"\nmultiplication result:\n";
               multiplied.displaymatrix();
             }
             return 0;
     }
