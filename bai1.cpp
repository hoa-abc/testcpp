#include <iostream>
#define MAX 10
using namespace std;

int main()
{
    int a[MAX];
    for (int i=0;i<MAX;i++)
        cin>>a[i];
    for (int i=0;i<MAX;i++)
        cout<<a[i]<<" ";    
}