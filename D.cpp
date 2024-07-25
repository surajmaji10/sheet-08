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

    long long int a, b;
    cin >> a >> b;
    int c = 0;
    while(a <= b){
    	a *= 3;
    	b *= 2;
    	c += 1;
    }

    cout << c << endl;

 
    return 0;
}