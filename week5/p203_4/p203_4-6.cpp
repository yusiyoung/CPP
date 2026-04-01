#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

struct Rank{ char name[20]; int move; int sec; };

bool cmp(Rank a, Rank b){
    if(a.move!=b.move) return a.move<b.move;
    return a.sec<b.sec;
}

int main(){
    Rank r[11]={{"Kim",30,50},{"Lee",20,40},{"Park",25,35},{"Choi",15,20},{"Han",18,25},
                {"Jung",22,30},{"Seo",28,45},{"Lim",19,29},{"Song",17,22},{"Yun",16,21},
                {"You",14,19}}; // 새 기록 포함
    sort(r,r+11,cmp);

    ofstream out("rank.dat",ios::binary);
    for(int i=0;i<10;i++) out.write((char*)&r[i],sizeof(Rank));
    out.close();

    ifstream in("rank.dat",ios::binary);
    Rank x;
    while(in.read((char*)&x,sizeof(Rank)))
        cout<<x.name<<" "<<x.move<<" "<<x.sec<<"\n";
}