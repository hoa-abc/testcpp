#include <iostream>
#define MAX 100
using namespace std;

void nhapmang(int a[][3], int &n)  
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
}
int chiara(int n, int m)
{
    int a=m+n;
    int x;
    if (a%2)
        x=(a+1)/2;
    else
        x=a%2+1;
    return x;
}
void tongtanso(int a[][3], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)   
        sum += a[i][0]; 
    cout<<"Tong tan so la: "<<sum<<endl;
    int x1=chiara(0,sum/2-1);
    int x2=chiara(sum/2+1,sum);
    int tam1=0, tam2=0;
    int i=0, j=0;
    while (tam1<x1/2)
    {
        tam1+=a[i][0];
        i++;
    }
    while (tam2<x2/2)
    {
        tam2+=a[j][0];
        j++;
    }
    float tpv1=a[i][1]+((sum/4-tam1)/a[i][0])*(a[i][2]-a[i][1]);
    float tpv3=a[j][1]+((3*sum/4-tam2)/a[j][0])*(a[j][2]-a[j][1]);
    cout<<"Tu phan vi thu 1: "<<tpv1<<endl;
    cout<<"Tu phan vi thu 3: "<<tpv3<<endl;
}

int main()
{
    int mang[MAX][3]; 
    int n;            
    nhapmang(mang, n);
    tongtanso(mang, n); 
}