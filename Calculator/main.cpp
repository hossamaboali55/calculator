#include <iostream>

using namespace std;

int main()
{
    double num1;
    double num2;
    char op;
    while(1)
    {
        cout<<"Select the operation\n";
        cout<<" a) Addition\n b)Subtraction \n c)Multiply \n d)Division\n";
        cin>>op;
        cout<<"Enter two Numbers\n";
        cin>> num1;
        cin>> num2;

        if(op=='a'|| op=='A')
        {

            cout<<"result:"<<num1+num2<<endl;
            cout<<"\n";
        }
        else  if(op=='b'|| op=='B')
        {

            cout<<"result:"<<num1-num2<<endl;
            cout<<"\n";
        }
        else  if(op=='c'||op=='C')
        {

            cout<<"result:"<<num1*num2<<endl;
            cout<<"\n";
        }
        else  if(op=='d'||op=='D')
        {
            if(num2==0)
            {
                cout<<"ERROR"<<endl;
                cout<<"\n";
            }
            else
            {

                cout<<"result:"<<num1/num2<<endl;
                cout<<"\n";
            }
        }

    }
    return 0;
}
