//finding whether the string posses duplicate characters or not

#include<iostream>
#include<string.h>
using namespace std;

int fun(char *b){

int r=0;
long long int k=0;
int ln=strlen(b);
cout<<ln;
for(int i=0;i<ln;i++){

    if(k&1<<b[i])
        return 1;
        k=k|1<<b[i];
}

return r;
}

int main(){

    char *ne=new char[10];
    cin>>ne;

    if(fun(ne))
    cout<<"it's having duplicates";
    else
    cout<<"has unique characters";

    return 0;

}
