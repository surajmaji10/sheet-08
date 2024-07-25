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

int isl(int n){

	while(n > 0){
		int r = n % 10;
		if(r == 4 or r == 7){
			n = n / 10;
			continue;
		}else{
			return false;
		}
	}
	return true;
}

int isal(int n){

	if(n % 4 == 0 or n % 7 == 0){
		return true;
	}
	if(n % 44 == 0 or n % 74 == 0){
		return true;
	}
	if(n % 47 == 0 or n % 77 == 0){
		return true;
	}

	if(n % 444 == 0 or n % 744 == 0){
		return true;
	}
	if(n % 474 == 0 or n % 774 == 0){
		return true;
	}
	if(n % 447 == 0 or n % 747 == 0){
		return true;
	}
	if(n % 477 == 0 or n % 777 == 0){
		return true;
	}

	return false;

}


/**********************************************************************/
int main(){
    init();

    int n;
    cin >> n;

    if(isl(n)){
    	cout << "YES\n";
    }else if(isal(n)){
    	cout << "YES\n";
    }else{
    	cout << "NO\n";
    }


 
    return 0;
}