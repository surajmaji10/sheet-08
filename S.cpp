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

    int n, k;
    char ch;

    scanf("%d%c%d%c", &n, &ch, &k, &ch);

    int goods = 0;

    char s[1000];
    for(int i = 0; i < n; i++){
    	scanf("%s\n", s);
    	int count[10] = {0};
    	int m = strlen(s);
    	//cout << s << ":" << m << endl;
    	for(int i = 0; i < m; i++){
    		count[s[i]-48]++;
    	}

    	bool atleast1 = true;
    	for(int i = 0; i <= k; i++){
    		//cout << count[i] << ", ";
    		if(count[i] < 1){
    			atleast1 = false;
    			break;
    		}
    	}
    	//cout << endl;

    	if(atleast1)
    		goods++;
    }

    cout << goods << endl;
 	
    return 0;
}