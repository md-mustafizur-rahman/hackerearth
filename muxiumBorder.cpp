#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 0;
    int result = 0;
    int r, c;
    cin >> r >> c;
    string arr;
    while (n--)
    {
       
    
    
    for (int j = 0; j < r; j++)
    {

        for (int i = 0; i < c; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < c; i++)
        {
            if (arr[i] == '#')
            {
                count++;
            }
        }
        if(count>result)
        {
            result=count;
            count=0;
        }
        else
        {
            count=0;
        }
    }

    cout << result;
    }
}