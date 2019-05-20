/* 

	사용할 함수 참고

	파일 오픈하기 fopen						// [내용물 출력하기]https://blog.naver.com/vkkv456/221286419303
	파일 구조체를 이용하여 문자열을 가져오기 char *fgets(char *str, int numChars, FILE *stream); // [fgets사용법]https://blog.naver.com/zzzz4022/221439119422


*/

#define MAX_LENGTH 100
#include <stdio.h>


int main(void) {
	
	int line_count = 0;							// 줄 수 세는 카운트 변수
	char buffer[MAX_LENGTH];					//
	FILE* p_file = NULL;						//

	if (fopen_s(&p_file, "mips.txt", "r") == 0) {		// fopen_s 는 파일이 열리면 0을 반환

		while (fgets(buffer, MAX_LENGTH, p_file) != NULL) {
			line_count++;
			printf("[%d] %s", line_count, buffer);
		}
		fclose(p_file);

	}
	else
		printf("파일이 잘못되었습니다.\n");


	return 0;
}