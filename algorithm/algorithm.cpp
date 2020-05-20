// algorithm.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


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
void main() {

}