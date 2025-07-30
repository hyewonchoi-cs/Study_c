#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Be happy");
	system("pause"); // Press any key to coninue 가 출력됨
	return 0;
}

// control + shift + s : 전체 저장
// control + shift + b : compile = [빌드 - 솔루션빌드] 
// control + f5 : 실행

// [소스파일] - 전처리(필요한 함수 추가) - 컴파일 - [Object file] 상태에서 링크를 통해 [startup code : main함수 호출 등 준비작업 코드] - [실행파일]
// 빌드와 링크의 차이점?