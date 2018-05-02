#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test, ct=0;
    while(cin >> test)

    {
    for(int i=1; i<=test; i++){

        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if((a+b) > (c+d)) ct++;

        int e, f, g, h;
        cin >> e >> f >> g >> h;
        if((e+f) > (g+h)) ct++;

        if(ct==2) printf("Banglawash\n");
        else printf("Miss\n");
        ct=0;
    }
    }
}
