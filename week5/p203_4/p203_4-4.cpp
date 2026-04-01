#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(){
    ifstream in("save.txt");
    int n,cnt,sec; in>>n>>cnt>>sec;
    vector<vector<int>> b(n,vector<int>(n));
    for(int i=0;i<n;i++)for(int j=0;j<n;j++) in>>b[i][j];

    cout<<"이전 이동횟수: "<<cnt<<"\n";
    cout<<"이전 경과시간: "<<sec<<"초\n";
    for(int i=0;i<n;i++){for(int j=0;j<n;j++) cout<<(b[i][j]?to_string(b[i][j]):" ")<<"\t"; cout<<"\n";}
}