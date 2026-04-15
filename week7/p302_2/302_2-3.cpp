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

int main() {
    MyDic dic1, dic2;

    dic1.add("pig", "돼지");
    dic1.add("chicken", "닭");
    dic1.add("cow", "소");

    cout << "[현재 단어장]" << endl;
    dic1.print();

    dic1.store("dic.txt");

    dic2.load("dic.txt");

    cout << "\n[파일에서 읽은 단어장]" << endl;
    dic2.print();

    cout << "\n0번 영어 단어: " << dic2.getEng(0) << endl;
    cout << "0번 한글 뜻: " << dic2.getKor(0) << endl;

    return 0;
}