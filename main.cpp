#include <iostream>
using namespace std;

int main()
{
    // Порозрядне заперечення
    int nA = 23; //  23 в двійковій системі  = 10111
    int nInverta = ~ 23; // 23 після інверсії в двійковій системі у 8-бітому  для -24 = 11101000
    cout << "nA = " <<nA << endl;
    cout << "nInverta = "<<nInverta<<endl;

    // Порозрядне "І"
        int nB = 94;  // 94 в двійковій системі = 1011110
        int nC = 127; // 127 в двійковій системі = 1111111
        int nAndBC = nB & nC;
        cout << "nB=" << nB << endl;
        cout << "nC=" << nC << endl;
        cout <<"nAndBC=" << nAndBC << endl;

    // Порозрядне "АБО"
    int nK = 139;  // 139 в двійковій системі = 10001011
    int nM = 70; // 127 в двійковій системі = 1000110
    int nOrBC = nM | nK;
    cout << "nK=" << nK << endl;
    cout << "nM=" << nM << endl;
    cout <<"nOrBC=" << nOrBC << endl; // 207 в двійковій системі = 11001111

    // Порозрядне "АБО", яке виключає
    int nL = 39;  // 39 в двійковій системі = 100111
    int nP = 83; //   83 в двійковій системі = 1010011
    int nXorBC = nL ^ nP;
    cout << "nL=" << nL << endl;
    cout << "nP=" << nP << endl;
    cout <<"nXorBC=" << nXorBC << endl; //116 в двійковій системі = 1110100

    // Порозрядний зсув ліворуч та порозрядний зсув праворуч
    int nS = 912;  //  912 в двійковій системі = 1110010000
    int nG = 6 ; //   6 в двійковій системі = 110
    int nLeftShift  = nS << nG;
    cout << "nS=" << nS << endl;
    cout << "nG=" << nG << endl;
    cout <<"nLeftShift=" << nLeftShift << endl; // 58368 в двійковій системі = 1110010000000000
    int nO = -90; // -90 в двійковій системі = 10100110
    int nZ = 6; //6 в двійковій системі = 110
    int nRightShift  = nO >> nZ;
    cout << "nO=" << nO << endl;
    cout << "nZ=" << nZ<< endl;
    cout <<"nRightShift=" << nRightShift << endl; // -2 в двійковій системі  = 11111110

    return 0;
}


