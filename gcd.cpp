#include <bits/stdc++.h>
using namespace std;

// function to calculate gcd
int gcd(int n1, int n2)
{
    while(n1 != n2) 
    {
        if(n1 > n2) n1 -= n2;
        else n2 -= n1;
    }

    return n1;
}