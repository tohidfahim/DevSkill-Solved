#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, sum=0, total;

    while(cin >> a >> b)
    {
        sum=0;
        for(int i=1; i<=b; i++)
        {
            int in;
            cin >> in;
            sum = sum + in;
        }
        total = a/sum;
        if (total*sum!=a)
            total++;

        if(total>1) printf("Project will finish within %d days.\n", total);
        else printf("Project will finish within %d day.\n", total);
    }

    return 0;
}
