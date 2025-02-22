#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream fout;

fout.open("country.txt");
fout<<"\nU.S";
fout<<"\nU.K";
fout<<"\nINDIA";
fout.close();

fout.open("capital.txt");
fout<<"\nwashinton";
fout<<"\nLondon";
fout<<"\nDelhi";
fout.close();

ifstream fin;

const int N=80;
char line[N];
fin.open("country.txt");
cout<<"\ncontent of country file:";
   while(fin)
    {
        fin.getline(line,N);
        cout<<line<<"\n";
      } 
      fin.close();
 
fin.open("capital.txt");
cout<<"\ncontent of capital file:";
while(fin)
{
   fin.getline(line,N);
   cout<<line<<"\n";
 }
 fin.close();



return 0;
}
