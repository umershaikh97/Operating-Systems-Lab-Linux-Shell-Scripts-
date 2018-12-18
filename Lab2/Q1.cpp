#include<iostream>
#define C 3 // number of rows
#define R 3  // number of columns
using namespace std;
main()
{

int a[R][C];
int result[C][R];

for(int i=0;i<R;++i)
{
    for(int j=0;j<C;++j)
    {
        cout<<"Enter value for a["<<i<<"]["<<j<<"] : ";
        cin>>a[i][j];
    }
}


for(int i=0;i<R;++i)
{
    for(int j=0;j<C;++j)
    {
        result[j][i]=a[i][j];
    }
}

cout<<"\nTranspose is : "<<endl;

for(int i=0;i<C;++i)
{
    for(int j=0;j<R;++j)
    {
        cout<<result[i][j]<<"\t";
    }
    cout<<endl;
}

return 0;


}
