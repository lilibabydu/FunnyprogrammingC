#include <iostream>
using namespace std;
int main()
{
  const  int  USER=201701,PSW=135790;
  int  user,psw;
  cout<<"�û���:";
  cin>>user;
  cout<<"���룺";
  cin>>psw;
  if (user==USER)  
    if(psw==PSW)
      cout<<"�װ���С���ѻ�ӭ��!";
    else
      cout<<"�������!";
  else
    cout<<"�û�������!" ;  
  return 0;
}
