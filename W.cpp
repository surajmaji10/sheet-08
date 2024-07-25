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

    int n = s.size();
    int m = t.size();

    if(s == t){
    	cout << -1 << endl;
    }else{
    	cout << max(n, m) << endl;
    }

 
    return 0;
}