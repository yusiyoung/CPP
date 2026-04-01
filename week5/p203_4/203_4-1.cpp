#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

void p(vector<vector<int>>& b,int n){for(int i=0;i<n;i++){for(int j=0;j<n;j++) cout<<(b[i][j]?to_string(b[i][j]):" ")<<"\t"; cout<<"\n";}}
void f(vector<vector<int>>& b,int n,int& x,int& y){for(int i=0;i<n;i++)for(int j=0;j<n;j++)if(!b[i][j]){x=i;y=j;return;}}
bool mv(vector<vector<int>>& b,int n,char c){int x,y,nx,ny; f(b,n,x,y); nx=x; ny=y; if(c=='w')nx++; else if(c=='s')nx--; else if(c=='a')ny++; else if(c=='d')ny--; else return 0; if(nx<0||nx>=n||ny<0||ny>=n)return 0; swap(b[x][y],b[nx][ny]); return 1;}
bool ok(vector<vector<int>>& b,int n){int k=1; for(int i=0;i<n;i++)for(int j=0;j<n;j++) if(i==n-1&&j==n-1){if(b[i][j]!=0)return 0;} else if(b[i][j]!=k++) return 0; return 1;}

int main(){
    srand(time(0));
    int n; cin>>n; // 3 또는 5
    vector<vector<int>> b(n,vector<int>(n));
    int k=1; for(int i=0;i<n;i++)for(int j=0;j<n;j++) b[i][j]=k++; b[n-1][n-1]=0;
    char d[4]={'w','a','s','d'}; for(int i=0;i<200;i++) mv(b,n,d[rand()%4]);
    char c;
    while(1){ p(b,n); if(ok(b,n)){cout<<"완성\n"; break;} cin>>c; if(c=='q') break; mv(b,n,c); }
}
