#include<iostream>
#include<string.h>

using namespace std;

int main(){

char *er=new char[20];
cin>>er;
int rt=strlen(er);
//cout<<rt;
int *rtr=new int[rt];
int j=0;
for(int i=1;i<rt;i++){


    if(er[j]!=er[i]){
   // cout<<j;
        j=rtr[j-1];
        rtr[i]=j;
    }
     if(er[j]==er[i]){
    rtr[i]=j+1;
    j++;
    }

}
for(int i=0;i<rt;i++){

    cout<<rtr[i];
}

return 0;
}
