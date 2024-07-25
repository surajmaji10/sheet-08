/*
 * Author: akashmaji945 (@gmail.com) 
 */
#include<bits/stdc++.h>
using namespace std;

void init(){
	#ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
/***********************************************************************/



/**********************************************************************/
int main(){
    init();

    string s, t;
    cin >> s >> t;

    int pos = 0;
    for(int c = 0; c < t.size(); c++){
    	if (t[c] == s[pos]) pos++;
    }
    cout << ++pos << endl;
 
    return 0;
}