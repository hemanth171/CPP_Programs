#include <bits/stdc++.h>
using namespace std;

void genPar(int lrem,int rrem,char ar[],int count,vector<string>& ls){
    if(lrem<0 || rrem<lrem){
        return;
    }
    if(lrem==0 && rrem==0){
        string str = ar;
        ls.push_back(str);
    }
    if(lrem>0){
        ar[count]='(';
        genPar(lrem-1,rrem,ar,count+1,ls);
    }
    if(rrem>0){
        ar[count]=')';
        genPar(lrem,rrem-1,ar,count+1,ls);
    }
}

vector<string> generatePar(int in){
    vector<string> ans;
    char a[in*2];
    genPar(in,in,a,0,ans);
    return ans;
}

int main(){
    int in = 4;
    vector<string> out;
    out=generatePar(in);
    for(int i=0;i<out.size();i++){
        cout << out[i] << endl;
    }
    return 0;
}