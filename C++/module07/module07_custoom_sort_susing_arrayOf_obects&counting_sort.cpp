#include<bits/stdc++.h>
using namespace std;
class CustomSort
{
public:
    char c;
    int cnt;

};
bool cmp(CustomSort a,CustomSort b)
{

    if(a.cnt>b.cnt) return true;
    else return false;
}
int main(){
int n;
cin>>n;
//int frq[26]={0};
CustomSort frq[26];
for(int i=0;i<26;i++)
{
    frq[i].c=(i+'a');//(i+97)-atao likha jai
    frq[i].cnt=0;
}
for(int i=0;i<n;i++){
    char c;
    cin>>c;
    frq[c-'a'].cnt++;
}
sort(frq,frq+26,cmp);//cnt jetar besi seta age asbe jetar kom seta por asbe

for(int i=0;i<26;i++){
        if(frq[i].cnt>0){
  //  cout<<frq[i].c<<" " << frq[i].cnt<<endl;
    for(int j=0;j<frq[i].cnt;j++){
        cout<<frq[i].c;
    }
}
}


}
