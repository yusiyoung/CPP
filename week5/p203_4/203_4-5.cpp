#include <iostream>
using namespace std;

int main(){
    char b[4][4]={{'A','B','C','D'},{'E','F','G','H'},{'I','J','K','L'},{'M','N','O',' '}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++) cout<<b[i][j]<<"\t";
        cout<<"\n";
    }
}