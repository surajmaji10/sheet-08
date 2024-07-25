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

int foo(int v, int a, int b, int c){
	int d = 0;
	d += abs(v-a);
	d += abs(v-b);
	d += abs(v-c);
	return d;
}


/**********************************************************************/
int main(){
    init();

    int a, b, c;
    cin >> a >> b >> c;

    int s = a + b + c;

    /// NOT working
    // int s1= floor(s / 3.0);
    // int d1 = 0;
    // d1 = d1 + abs(a-s1);
    // d1 = d1 + abs(b-s1);
    // d1 = d1 + abs(c-s1);

    // int s2 = ceil(s / 3.0);
    // int d2 = 0;
    // d2 += abs(a-s2);
    // d2 += abs(b-s2);
    // d2 += abs(c-s2);

    // cout << min(d1, d2) << endl;

    int minv = (a < b) ? ((a < c) ? a : c ): ((b < c) ? b : c);
    int maxv = (a > b) ? ((a > c) ? a : c ): ((b > c) ? b : c);

    int ans = INT_MAX;
    for(int v = minv; v <= maxv; v++){
    	int subans = foo(v, a, b, c);
    	ans = min(ans, subans);
    }

    cout << ans << endl;
 
    return 0;
}