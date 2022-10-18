#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, sum = 0;
	cin>>n;
	int temp = n;
	while(temp){
	    int r = temp % 10;
	    sum = sum * 10 + r;
	    temp/=10;
	}
	if(sum == n){
		cout<<"Palindrome";
	}
	return 0;
}
