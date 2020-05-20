// algorithm.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;


// 1. 알고리즘?
// 홀수끼리의 합, 짝수끼리의 합

/*
void main() {
	// i -> 1~100까지
	// asum = 1~100까지 홀수 합
	// bsum = 1~100까지 짝수 합
	// sw => 스위치 변수(짝수인지 홀수인지 확인)

	int asum = 0, bsum = 0, sw = 0, i = 1;

	while ( i <= 100) {
		sw = i % 2;
		if (sw == 1) {
			asum += i;
		}
		else bsum += i;
		i++;
	}
	cout << "asum = " << asum << " bsum = " << bsum;
}

// 알고리즘에 나와있는 순서대로 풀자면 이렇게
//void main() {
// sw가 0이면 짝수 1이면 홀수
//	int i = 0, asum = 0, bsum = 0, sw = 1;
//	do {
//		i++;
//		if (sw == 0) {
//			asum += i;
//			sw = 1;
//		}
//		else {
//			bsum += i;
//			sw = 0;
//		}
//	} while (i < 100);
//}

*/

// 2. 알고리즘 2
/*
void main() {
	// -,+ 가 번갈아서 등장하면서 1~100까지 연산.
	int sum = 0, num = 1, sw = 1;
	while (num <= 100) {
		// 방법 1.
		//if (sw == 1) //홀수
		//{
		//	sum += num;
		//	sw = 0;
		//}
		//else //짝수
		//{
		//	sum -= num;
		//	sw = 1;
		//}

		// 방법 2.
		sum += sw*num;
		sw *=-1;
		num++;
	}
	cout << "결과는 " << sum << endl;
}
*/

// 3. 소수 판별법
/*
void main() {
	int n, flag = 0, i;
	cout << "숫자를 입력하세요 : ";
	cin >> n;

	for (int i = 2; i < n; i++) {
		if (n%i == 0) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		cout << "소수가 아닙니다. " << endl;
	}
	else cout << "소수입니다." << endl;
}
*/

//4. 소수 판별법 - 제곱근 이용 -> sqrt() 이용
/*
void main() {
	int i, j = 2, flag = 0;
	cout << "숫자를 입력하세요 : ";
	cin >> i;
	cout << sqrt(i) << endl;
	while (j <= sqrt(i)) {
			if (i%j == 0) {
				flag = 1;
				break;
			}
			else {
				j = j + 1;
			}
	}
	if (flag == 0) {
		cout << i << "는 소수 입니다." << endl;
	}
	else	cout << i << "는 소수가 아닙니다." << endl;
}
*/

// 5. 1~100까지 가장 큰 소수(번외로 입력하는 것 까지)
void main() {
	int n = 3, p = 2, num;
	cout << "어디까지 큰 수를 구할까? ";
	cin >> num;
	// n -> 100까지 가는거 / 판별할 숫자
	// p -> 가장 큰 소수를 담는 변수?

	for (; n < num; n++) {
		int pan = 0, sq = sqrt(n); // sqrt(n) --> n의 제곱근을 구하는 것.
		for (int i = 2; i <= sq; i++) {
			if (n%i == 0) {
				pan = 1;
				break;
			}
		}
		if (pan == 0) {
			p = n;
		}
	}
	cout << "가장 큰 소수는 " << p << " 입니다. " << endl;
}

// 5-1. 쌤 방법
/*
void main() {
	int n, flag = 0, i, sq;
	cout << "숫자를 입력하세요 : ";
	cin >> n;
	sq = sqrt(n);
	cout << "분석 숫자 : " << sq;
	for (i = 2; i < sq; i++) {
		if ((sq%i) == 0) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) cout << "은(는) 소수 입니다." << endl;
	else cout << "은(는) 소수가 아닙니다." << endl;
}
*/