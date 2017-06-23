#include<iostream>
#include<string.h>
using namespace std;

char a[16][4];
void fun(char *s){

    for(int i=0;i<1<<strlen(s);i++)
    {
        int c=0;

        for(int j=0;j<strlen(s);j++)
        {

            if((i & (1<<j))!=0)
            {
                a[i][c]=s[j];
                c++;
            }

        }

    }


}

int main(){

    char *r=new char[6];
    cin>>r;

    fun(r);

    for(int i=0;i<16;i++)
    {
    cout<<i+1<<"-{";
        for(int j=0;j<4;j++)
        {

           cout<< a[i][j];
        }
        cout<<"}";
        cout<<endl;
    }
}
