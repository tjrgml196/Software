/* 

	����� �Լ� ����

	���� �����ϱ� fopen						// [���빰 ����ϱ�]https://blog.naver.com/vkkv456/221286419303
	���� ����ü�� �̿��Ͽ� ���ڿ��� �������� char *fgets(char *str, int numChars, FILE *stream); // [fgets����]https://blog.naver.com/zzzz4022/221439119422


*/

#define MAX_LENGTH 100
#include <stdio.h>


int main(void) {
	
	int line_count = 0;							// �� �� ���� ī��Ʈ ����
	char buffer[MAX_LENGTH];					//
	FILE* p_file = NULL;						//

	if (fopen_s(&p_file, "mips.txt", "r") == 0) {		// fopen_s �� ������ ������ 0�� ��ȯ

		while (fgets(buffer, MAX_LENGTH, p_file) != NULL) {
			line_count++;
			printf("[%d] %s", line_count, buffer);
		}
		fclose(p_file);

	}
	else
		printf("������ �߸��Ǿ����ϴ�.\n");


	return 0;
}