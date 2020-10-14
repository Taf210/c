#include<iostream>
#include<conio.h>

using namespace std;

int main()
{


    int i,j,NOR,NOC;
    int A[10][10], B[10][10],C[10] [10] ;

    cout<<" Enter the number of ROWS"<<" = ";
    cin>>NOR;
    cout<<" Enter the number of Cols"<<" = ";
    cin>>NOC;



    cout<<" Enter elements fpr A matrix"<< " = ";
    for(int i=0; i<NOR; i++)
    {
        for(int j=0; j<NOC; j++)
        {
            cout<<" A["<<i<<"]["<<j<<"] =  ";
            cin>> A[i][j];
        }
    }
           cout<<" Enter elements for B matrix"<< " = ";
    for(int i=0; i<NOR; i++)
    {
        for(int j=0; j<NOC; j++)
        {
            cout<<" B["<<i<<"]["<<j<<"] =  ";
            cin>> B[i][j];
        }
    }

        cout<<"A = "<<endl;
       for(int i=0; i<NOR; i++)
    {
        for(int j=0; j<NOC; j++)
        {
            cout<<A [i][j]<<" ";
        }
        cout<<endl;
    }

        cout<<" B = "<<endl;
       for(int i=0; i<NOR; i++)
    {
        for(int j=0; j<NOC; j++)
        {
            cout<<B [i][j]<<" ";
        }
        cout<<endl;
    }
      for(int i=0; i<NOR; i++)
    {
        for(int j=0; j<NOC; j++)
        {
            C[i] [j] = A[i][j] + B[i][j];        }
    }

    cout<<"A + B  = "<<endl;
      for(int i=0; i<NOR; i++)
    {
        for(int j=0; j<NOC; j++)
        {
            cout<< C[i][j]<<" ";
        }
        cout<<endl;
    }



    getch();
}
