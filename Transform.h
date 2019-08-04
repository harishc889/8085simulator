#ifndef TRANSFORM_CC
#define TRANSFORM_CC
#include<bits/stdc++.h>
string transform1(string s){
    transform(s.begin(),s.end(),s.begin(),::toupper);
    return s;
}
#endif
