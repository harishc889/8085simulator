//hexstring to int
// to maintain uniform solu always use string register in lower case

#ifndef HEXINT_CC
#define HEXINT_CC
#include<bits/stdc++.h>
using namespace std;
int HexInt(string s)
{
unsigned int x;
    stringstream ss;
    ss << hex << s;
    ss >> x;
    return x;
    }


#endif // HEXINT_H
