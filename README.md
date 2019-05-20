> ## 소프트웨어 과제입니다.  
------------------------  
* 학교 : **경상대학교**  
* 학과 : **컴퓨터과학과**  
* 수업 : **공개소프트웨어소개**  
* 학번 : **2016080073**  
* 이름 : **조석희**  
* 주소 : https://github.com/tjrgml196/Software  
------------------------
* 내용 : **프로그램목적**  
  *주어진 MIPS 어셈블리어 프로그램을 파싱(Parsing)하는 프로그램을 작성한다.  
  *프로그래밍 언어는 C로 한정한다.  
* MIPS 명령어 형식  
  - Load word  
    + 형식 : lw rt, offset(rs)  
      * rt:$0 ~ $31  
      * offset:16-비트 숫자(-2^15 ~ 2^15-1)  
      * rs:$0 ~ $31  
     + 예제 : lw $1, 10($2)  
   - Add immediate  
     + 형식 : addi rt, rs, imm  
       * imm:16-비트 숫자(-2^15 ~ 2^15-1)  
     + 예제 : addi $1, $2, 10  
   - Subtract  
     + 형식 : sub rd, rs, rt
       * rd, rs, rt : $0 ~ $31  
     + 예제 : sub $30, $20, $15  
     ------------------------
