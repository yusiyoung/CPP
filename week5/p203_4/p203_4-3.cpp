#include <iostream>
#include <vector>
#include <fstream>
#include <ctime>
using namespace std;

void save(vector<vector<int>>& b,int n,int cnt,time_t st){
    ofstream out("save.txt");
    out<<n<<" "<<cnt<<" "<<time(0)-st<<"\n";
    for(int i=0;i<n;i++){for(int j=0;j<n;j++) out<<b[i][j]<<" "; out<<"\n";}
}

int main(){
    int n=4,cnt=7; time_t st=time(0);
    vector<vector<int>> b={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,0,15}};
    save(b,n,cnt,st);
    cout<<"저장 완료\n";
}