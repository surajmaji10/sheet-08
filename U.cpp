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

    char str[101] = {0};
    cin >> str;

    int n = strlen(str);

    if(str[0] == '-'){

    	if(str[n-1] > str[n-2]){
    		str[n-1] = '.';
    	}else{
    		str[n-2] = '.';
    	}

    	char ans[101] = {0};
    	int j = 0;
    	for(int i = 0; i < n; i++){
    		if(str[i] != '.')
    			ans[j++] = str[i];
    	}
    	if(ans[1] != '0')
    		cout << ans << endl;
    	else
    		cout << '0' << endl;

    }else{
    	// the number is +ve
    	cout << str << endl;
    }


 
    return 0;
}