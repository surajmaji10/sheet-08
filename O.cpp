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

    long long int n, x, v, d = 0;
    scanf("%lld %lld", &n, &x);

    char ch, op;
    scanf("%c", &ch);

    for(int i = 0; i < n; i++){
    	// cin >> op >> ch >> v >> ch;
    	// cout << op << " " << v << endl;

    	scanf("%c%c%lld%c", &op, &ch, &v, &ch);
    	if(op == '+'){
    		x += v;
    	}else{
    		if(x >= v){
    			x -= v;
    		}else{
    			d += 1;
    		}
    	}
    }

    cout << x << " " << d << endl; 
 
    return 0;
}