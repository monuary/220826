#include <iostream>
using namespace std;//이 선언구역의 std관련 모든 함수는 이름공간std의 것만 발동된다.
//위와 같이 이름공간 전체를 using namespace 이름공간으로 선언할 수도 있지만, 사용하는 예제에만 일일이 선언을 삽입하는 것이 더 좋은 습관이다. 버그를 줄일 수 있다.

int main()
{
	int num = 20;
	cout << "Hello World!\n";
	cout << "Hello " << "World!" << endl;
	cout << num << " " << 'A';
	//''안에는 1바이트에 속하는 한 글자만 넣을 수 있다. 이외의 것을 넣으면 16진수로 이루어진 무언가가 나온다. 헤더를 잘못 설정했을 때의 것과 비슷하다.
	cout << " " << 3.14 << endl;
	return 0;
}