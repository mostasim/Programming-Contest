#include<bits/stdc++.h>

using namespace std;

int add(int n)
{
    if(n==0)
        return 0;
    return n+add(n-1);


}
int main()
{


    cout << add(100);

    return 0;
}
