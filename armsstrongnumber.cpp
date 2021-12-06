#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int sum=0;
    int o=n;
    while(n!=0)
    {
        int lastdigit=n%10;
        sum+=lastdigit*lastdigit*lastdigit;
        n=n/10;
    }
    if(sum==o)
    {
        cout<<"armstrong number"<<endl;
    }
    else
    {
        cout<<"not armstong number"<<endl;
    }
    return 0;
}