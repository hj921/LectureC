/*
3. 다음과 같은 함수 정의에서 컴파일 오류가 나는 이유를 찾아 보세요.
*/

void drawRectangle(int l, int r, int t, int b) { // 각 변의 좌표를 매개변수로 받는 함 수

}
/*
void drawRectangle(int x = 0, int y = 0, int w, int h) {
	// default 매개변수는 오른쪽부터
}
*/
void drawRectangle(int w, int h, int x = 0, int y = 0) {

} // main 함수에서 인수 4개를 가지는 drawRectangle(0, 0, 0, 0)으로 부를 경우 어느 함수를 부르는지 알 수 없음.