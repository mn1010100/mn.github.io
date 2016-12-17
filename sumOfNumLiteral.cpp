#include<iostream>
using namespace std;

int main()
{
    char ch;
    int sum=0;
    while(ch!='\n'){
        cin.get(ch);
        if(ch>='0' && ch<='9'){
        sum+=ch-48;
        ///cout<<"\n sum = "<<sum<<endl;
        }// this line was for chek ^
    }
    cout<<sum;
}
