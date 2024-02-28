#include <stdio.h>
#include <thread>
#include <string>
using namespace std;
int main() {
	const int text = 100000;
	string textA(text, 'a');

	chrono::steady_clock::time_point now;
	chrono::steady_clock::time_point end;

	now = chrono::steady_clock::now();
	string CopyTextA = textA;
	end = chrono::steady_clock::now();

	int copyResult = chrono::duration_cast<chrono::microseconds>(end - now).count();

	chrono::steady_clock::time_point movenow;
	chrono::steady_clock::time_point moveend;

	movenow = chrono::steady_clock::now();
	string MovetextA = move(textA);
	moveend = chrono::steady_clock::now();

	int moveResult = chrono::duration_cast<chrono::microseconds>(moveend - movenow).count();

	printf("コピーの場合　%d\n", copyResult);
	printf("移動の場合　%d\n", moveResult);

	

	
}