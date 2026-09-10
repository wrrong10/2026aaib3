///week01-2.cpp SOIT106_ADVANCE_001
#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int b = N, ans = 0;
	while(N>0) {
		ans = ans*10 + N%10;
		N = N / 10;
	}
	///cout << b << ans << b+ans; ///錯 少了 + = 跳行
	///cout << b << "+" << ans << "=" << b+ans << "\n"; ///正確1
	///cout << b << "+" << ans << "=" << b+ans << end1; ///正確2
	printf("%d+%d=%d\n", b, ans, ans=b); ///正確3
}
