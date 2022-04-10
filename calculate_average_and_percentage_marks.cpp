#include<iostream>
using namespace std;
int main()
{
        int marks[7], i;
        float sum=0;
        cout<<"\n Enter Marks of Student \n";
        cout<<"\n Ros Robotics C++ : ";
        cin>>marks[0];
        cout<<"\n Power Electronics : ";
        cin>>marks[1];
        cout<<"\n BEE: ";
        cin>>marks[2];
        cout<<"\n IOT : ";
        cin>>marks[3];
        cout<<"\n IPE : ";
        cin>>marks[4];
        cout<<"\n Substation Protection : ";
        cin>>marks[5];
        cout<<"\n Solar PVC : ";
        cin>>marks[6];

        for(i=0;i<7;i++)
        {
                sum=sum+marks[i];
        }

        float avg=sum/7;
        float per;
        per=(sum/700)*100;
        cout<<"\n Average Marks = "<<avg;
        cout<<"\n Percentage = "<<per<<" %";
        return 0;
}
