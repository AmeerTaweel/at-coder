/* Compile and run with:
g++ file.cpp -std=c++17 -O2 -Wall -o out && ./out < in
*/
#include <bits/stdc++.h>

using namespace std;

#define intfss int_fast8_t
#define intfs int_fast16_t
#define intf int_fast32_t
#define intfl int_fast64_t
#define ll long long

#define FAST_IO \
ios::sync_with_stdio(0);\
cin.tie(0);\
cout.tie(0);

int main(){
	FAST_IO;

	intfl n;
	cin >> n;

	intfl prev = 0;
	intfl next = 999;
	intfl current_commas = 0;
	intfl total_commas = 0;

	while(next < n){
		total_commas += current_commas * (next - prev);
		prev = next;
		next = next * 1000 + 999;
		current_commas++;
	}

	total_commas += current_commas * (n - prev);

	cout << total_commas;

	return 0;
}
