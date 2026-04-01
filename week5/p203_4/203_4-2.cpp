#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

void p(vector<vector<int>>& b,int n){for(int i=0;i<n;i++){for(int j=0;j<n;j++) cout<<(b[i][j]?to_string(b[i][j]):" ")<<"\t"; cout<<"\n";}}
void f(vector<vector<int>>& b,int n,int& x,int& y){for(int i=0;i<n;i++)for(int j=0;j<n;j++)if(!b[i][j]){x=i;y=j;return;}}
bool mv(vector<vector<int>>& b,int n,char c){int x,y,nx,ny; f(b,n,x,y); nx=x; ny=y; if(c=='w')nx++; else if(c=='s')nx--; else if(c=='a')ny++; else if(c=='d')ny--; else return 0; if(nx<0||nx>=n||ny<0||ny>=n)return 0; swap(b[x][y],b[nx][ny]); return 1;}

int main(){
    srand(time(0)); int n=4;
    vector<vector<int>> b(n,vector<int>(n)), start;
    vector<char> h; int k=1; for(int i=0;i<n;i++)for(int j=0;j<n;j++) b[i][j]=k++; b[3][3]=0;
    char d[4]={'w','a','s','d'}; for(int i=0;i<100;i++) mv(b,n,d[rand()%4]);
    start=b;
    char c;
    while(cin>>c && c!='q') if(mv(b,n,c)) h.push_back(c);
    cout<<"REPLAY\n"; b=start; p(b,n);
    for(char x:h){ mv(b,n,x); p(b,n); }
}