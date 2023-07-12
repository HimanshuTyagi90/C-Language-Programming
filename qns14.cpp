#include<iostream>
using namespace std;

class MAT
{
    int matrix[3][3];

    public:

    MAT()
    {
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                matrix[i][j]=0;
            }
        }
    }

    void getdata()
    {

        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                cout<<"enter value of element ["<<i+1<<"]["<<j+1<<"] of array: "; 
                cin>>matrix[i][j];
            }
        }
    }


    MAT operator+ (MAT c)
    {
        MAT temp;
        
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                temp.matrix[i][j]=matrix[i][j]+c.matrix[i][j];
            }
        }
        return(temp);
    }

    MAT operator* (MAT c)
    {
        MAT temp;
        int product;
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                for(int k=0;k<=2;k++)
                {
                temp.matrix[i][j]+=matrix[i][k]*c.matrix[k][j];
                }

                // =product;
                // product=0;
            }
            
        }
        
        return(temp);
    }


    void display()
    {
        for(int i=0;i<=2;i++)
        {
            for(int j=0;j<=2;j++)
            {
                // cout<<"  Value of element ["<<i+1<<"]["<<j+1<<"] of array: "; 
                cout<<" "<<matrix[i][j];
                // cout<<"         "<<matrix[i][j];
            }
            cout<<endl;
        }
    }
};

int main()
{
    MAT obj1,obj2,sum,mul;
    
    cout<<"enter matrix A element's values: "<<endl;
    obj1.getdata();
    cout<<"enter matrix B element's values: "<<endl;
    obj2.getdata();
    
    cout<<" Calculating Sum of matrix A and B is :"<<endl;
    sum=obj1+obj2;
    cout<<" Calculating Mul of matrix A and B is :"<<endl;
    mul=obj1*obj2;
    
    cout<<"Matrix A:"<<endl;
    obj1.display();
    cout<<"Matrix B:"<<endl;
    obj2.display();

    cout<<endl<<"Sum of matrix A and B is :"<<endl<<endl;
    sum.display();
    cout<<endl<<"Mul of matrix A and B is :"<<endl<<endl;
    mul.display();

    return(0);
}
 
