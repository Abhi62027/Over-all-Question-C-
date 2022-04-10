#include<iostream>
using namespace std;
int main()
{
        int m1[4][4], m3[4][4], i, j, m4[4][4];
        cout<<"\n Enter First Matrix Elements : \n";
        for(i=0; i<4; i++)
        {
                for(j=0; j<4; j++)
                {
                        cout<<" ";
                        cin>>m1[i][j];
                }
        }
        cout<<"\n Enter Second Matrix Elements : \n";
        for(i=0; i<3; i++)
        {
                for(j=0; j<4; j++)
                {
                        cout<<" ";
                        cin>>m3[i][j];
                }
        }
        cout<<"\n Sum of Two Matrices : \n\n";
        for(i=0; i<3; i++)
        {
                for(j=0; j<4; j++)
                {
                        m3[i][j]=m1[i][j]+m3[i][j];
                }
        }
        for(i=0; i<3; i++)
        {
                cout<<" ";
                for(j=0; j<3; j++)
                {
                        cout<<m3[i][j]<<" ";
                }
                cout<<"\n";
        }
        return 0;
}
