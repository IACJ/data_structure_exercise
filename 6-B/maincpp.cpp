#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--){
		int n, k;
		cin >> n >> k;
		int * arr = new int[n];

		for (int i = 0; i < n; i++){
			cin >> arr[i];
		}

		sort(arr, arr + n);

		cout << arr[k - 1] << endl;
		delete[] arr;
	}
	
}