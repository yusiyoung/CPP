#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAXWORDS = 100;

struct WordPair {
    string eng;   
    string kor;   
};

class MyDic {
    WordPair words[MAXWORDS];   
    int nWords;                 

public:
    MyDic() { nWords = 0; }

    void add(string eng, string kor) {
        if (nWords < MAXWORDS) {
            words[nWords].eng = eng;
            words[nWords].kor = kor;
            nWords++;
        }
    }

    void load(string filename) {
        ifstream fin(filename);
        string eng, kor;

        nWords = 0;

        while (fin >> eng >> kor) {
            add(eng, kor);
        }

        fin.close();
    }

    void store(string filename) {
        ofstream fout(filename);

        for (int i = 0; i < nWords; i++) {
            fout << words[i].eng << " " << words[i].kor << endl;
        }

        fout.close();
    }

    void print() {
        for (int i = 0; i < nWords; i++) {
            cout << i << " : " << words[i].eng << " - " << words[i].kor << endl;
        }
    }

    string getEng(int id) {
        if (id >= 0 && id < nWords)
            return words[id].eng;
        return "";
    }

    string getKor(int id) {
        if (id >= 0 && id < nWords)
            return words[id].kor;
        return "";
    }
};