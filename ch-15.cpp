#include <iostream>
using namespace std;
int main()
{
  const  int  USER=201701,PSW=135790;
  int  user,psw;
  cout<<"ÓÃ»§Ãû:";
  cin>>user;
  cout<<"ÃÜÂë£º";
  cin>>psw;
  if (user==USER)  
    if(psw==PSW)
      cout<<"Ç×°®µÄÐ¡ÅóÓÑ»¶Ó­Äã!";
    else
      cout<<"ÃÜÂë´íÎó!";
  else
    cout<<"ÓÃ»§Ãû´íÎó!" ;  
  return 0;
}
