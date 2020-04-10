#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    int white=0,black=0;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            cin >> ch;
            if(ch=='Q')
                white+=9;
            if(ch=='R')
                white+=5;
            if(ch=='B')
                white+=3;
            if(ch=='N')
                white+=3;
            if(ch=='P')
                white+=1;
            if(ch=='q')
                black+=9;
            if(ch=='r')
                black+=5;
            if(ch=='b')
                black+=3;
            if(ch=='n')
                black+=3;
            if(ch=='p')
                black+=1;
        }
    }
    if(white>black)cout << "White" << endl;
    else if(black>white)cout << "Black" << endl;
    else cout << "Draw" << endl;
}
