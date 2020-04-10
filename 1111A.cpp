#include<bits/stdc++.h>
using namespace std;
bool checkvowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    return true;
    else return false;
}
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    int l1=s1.length();
    int l2=s2.length();
    if(l1!=l2)
    {
        cout << "No\n";
        return 0;
    }
    int cont=0;
    for(int i=0;i<l1;i++)
    {
        if(checkvowel(s1[i])&&checkvowel(s2[i]))cont++;
        if(!checkvowel(s1[i])&&!checkvowel(s2[i]))cont++;
    }
    if(cont==l1)cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
