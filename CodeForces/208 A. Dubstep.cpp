#include<bits/stdc++.h>

using namespace std;



int main()
{


   string str;
   cin>>str;

   for(int i=0;i<str.length();i++)
   {
       if(str[i]=='W'&&str[i+1]=='U'&& str[i+2]=='B')
       {
           i+=2;

       }else
       {

           cout << str[i];
            if(str[i+1]=='W'&&str[i+2]=='U'&& str[i+3]=='B')
                cout << " ";
       }
   }
   cout << endl;

    return 0;
}

