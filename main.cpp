#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include<stdlib.h>
using namespace std;
char Xor (char x , char y)
{
    if((x=='0'&&y=='0')||(x=='1'&&y=='1'))
        return '0';
    else
        return '1';
}
string alter(int index,string m_in)
{   cout<<" Index = ";
    cin>>index;
    if(index!=0)
        {
    if(m_in[index]=='0')
    m_in[index]='1';
    else
    m_in[index]='0';
        }
        else
        {

        cout<<"Index should not equal 0"<<endl;
        m_in=alter(index,m_in);
        }
    return m_in;

}

string Generator(string mm,string pp)
{
    string rr=Remainder(mm,pp);
     mm+=rr;
     return mm;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
