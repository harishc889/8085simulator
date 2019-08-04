//Integer to HexaDecimal string
// to maintain uniform solu always use string register in lower case

#ifndef INTHEX_H
#define INTHEX_H
//#include<bits/stdc++.h>
using namespace std;
string IntHex(int i)
{
	stringstream ss;
        ss << hex << i;
        string res = ss.str();
	return res;
        }
#endif
