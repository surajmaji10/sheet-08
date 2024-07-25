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

int isPrime(int n){
	if(n <= 1){
		return 0;
	}else if(n == 2){
		return 1;
	}else if(n % 2 == 0){
		return 0;
	}else{
		int d = 3;
		while(d*d <= n){
			if(n%d==0){
				return 0;
			}
			d += 2;
		}
		return 1;
	}
	return 1;
}

int getNext(int n, int m){
	for(int num = n+1; num <= m; num++){
		if(isPrime(num))
			return num;
	}
	return -1;
}


/**********************************************************************/
int main(){
    init();

    int n, m;
    cin >> n >> m;

    int p = getNext(n, m);
    if(p == m){
    	cout << "YES\n";
    }else{
    	cout << "NO\n";
    }

 
    return 0;
}