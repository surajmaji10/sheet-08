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

long long int fibb[51] = {0, 0, 1};
bool prime[51] = {0, 0, 0};

bool isprime(long long int n){
	if(n <= 1){
		return 0;
	}else if(n == 2){
		return 1;
	}else if(n % 2 == 0){
		return 0;
	}else{
		long long int d = 3;
		while(d*d*1ll <= n*1ll){
			if(n%d==0){
				return 0;
			}
			d += 2;
		}
		return 1;
	}
	return 1;

}

void makeFibArr(){
	for(int i = 3; i <= 50; i++){
		fibb[i] = (fibb[i-1]*1ll) + (fibb[i-2]*1ll);
		prime[i] = isprime(fibb[i]);
		//cout << "checking:" << fibb[i] << ":" << prime[i] << endl;
	}
}

void show(){
	for(int i = 0; i <= 50; i++){
		cout << fibb[i] << "=>" << prime[i] << endl;
	}
}

/**********************************************************************/
int main(){
    init();

    int T;
    cin >> T;
    makeFibArr();
    // show();
    while(T--){
    	int n;
    	cin >> n;

    	if(prime[n]){
    		cout << "prime\n";
    	}else{
    		cout << "not prime\n";
    	}

    }

 
    return 0;
}