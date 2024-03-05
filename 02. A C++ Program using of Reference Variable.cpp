
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 15;
    int &ref = n;
    ref = 25;
    cout << n << endl;

    cout << ref << endl;
}
