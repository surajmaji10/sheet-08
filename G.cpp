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

    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 1;
    char ch = s[0];
    n--;
    while(n--){
    	string s;
    	cin >> s;
    	char c = s[0];
    	if(ch==c){
    		continue;
    	}else{
    		ch = c;
    		ans += 1;
    	}
    }

    cout << ans << endl;
 
    return 0;
}