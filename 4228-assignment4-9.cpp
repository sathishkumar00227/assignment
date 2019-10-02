#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream fin;
fin.open("OUT.TXT");
char ch;
int count=0;
while(!fin.eof())
{
fin.get(ch);
if(isalpha(ch))
count++;
}
cout<<"number of alphabets in file are"<<count<<endl;
fin.close();
return 0;
};
