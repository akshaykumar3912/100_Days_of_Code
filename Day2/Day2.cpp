#include<iostream>
#include<iomanip> // std::setw
using namespace std;

int main()
{
  int i,j,ll,ul;
  cout<<"Enter the lower limits and uppr limits :";
  cin>>ll>>ul;

  for (i=ll+1;i<=ul;i++)
   {
    for (j=2;j<i;j++)

      if (i%j==0)
        break;

        if(i==j)
        cout<<i<<setw(3);
   }
return 0;
}
