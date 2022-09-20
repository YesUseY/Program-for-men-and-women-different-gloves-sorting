#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("data.txt");
    int a;
    fin >> a;
    int lytis[a];
    int puse[a];
    int dydis[a];
    int pora = 0;
    int v=0;
    int m=0;
    int vkiekis = 0;
    int mkiekis = 0;
    for (int i=0; i<a; i++) {
        fin >> lytis[i] >> puse[i] >> dydis[i];
        if (lytis[i]==3) {
            vkiekis++;
        }
        else if (lytis[i]==4) {
            mkiekis++;
        }
    }
    for (int i=0; i<a-1; i++) {
        for (int j=i+1; j<a; j++) {
            if (lytis[i]==lytis[j]&&dydis[i]==dydis[j]&&puse[i]!=puse[j]) {
              if (lytis[i]==4) {
                m++;
              }
              else if(lytis[i]==3){
                v++;
              }
              lytis[j]=0;
              puse[j]=0;
              dydis[j]=0;
            break;
            }
        }
    }
        for (int i=0; i<a; i++) {
            cout << lytis[i] << " " << puse[i] << " " << dydis[i] << endl;
        }
    cout << m << " " << v << endl;
    cout << mkiekis - m*2 << " " << vkiekis - v*2 << endl;
    return 0;
}
