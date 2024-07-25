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

    int n, m;
    cin >> n >> m;

    int arr[n], brr[m];

    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int j = 0; j < m; j++) cin >> brr[j];

    long long sum1 = 0;
	for(int i = 0; i < n; i++) sum1 += arr[i];
	long long sum2 = 0;
	for(int j = 0; j < m; j++) sum2 += brr[j];

	if (sum1 == sum2){
		cout << "Yes\n";
	}else{
		cout << "No\n";
	}

    return 0;
}