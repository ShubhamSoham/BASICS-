#include<iostream>
using namespace std;
int main()
{ 
    int t; 
    cin>>t;
    while(t--)
    {
       int t1=0, t2=1, t3=1,n,i=0;
       cin>>n;
        while(i<n)
        {
    	    cout<<t3<<" ";
            t3 = t1+t2;
            t1=t2;
            t2=t3;
            i++;
        }
        cout<<endl;
    }
    return 0;
}
