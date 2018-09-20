#include<iostream>
using namespace std;

class A
{
public:

int a,b;
int sum;
void Input()
{
  cout<<"Enter two numbers you want to add"<<endl;
  cin>>a>>b;
}
 void Add()
 {
   sum= (-(-a-b));
 }

void Display()
{
  cout<<"your sum is:";
  cout<<sum;
  cout<<"hello";
  }

};

int main()
{
  A obj;
  obj.Input();
  obj.Add();
  obj.Display();
  return 0;

}
