// string �����̳��� �ֿ� ������ �����
// string�� ���ڸ� ���ҷ� ���ϴ� ������ �����̳��̹Ƿ� �ݺ��ڷ� �ʱ�ȭ�� �� �ִ�.
// string Ŭ������ ��� ��Ʈ�� << �����ڸ� �Լ� �����ε��Ͽ� ��Ʈ���� ���ڿ��� ����� �� �ִ�.
// string �����̳ʴ� �迭 ����� ������ �����̳��̸�, c/c++ó�� ���ڿ� ���� '\0'���ڸ� �����ؾ� �ϴ� �䱸������ ����.

// [��� ���]
// s1():
// s2(sz): Hello!
// s3(sz, n): He
// s4(n,c): HHHHH
// s5(iter1, iter2): Hello!
// s6(p1, p2): Hello!

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string t("Hello!"); // �ӽ� ���ڿ�
	const char* p1 = "Hello!";
	const char* p2 = p1 + 6;

	string s1;
	string s2("Hello!");
	string s3("Hello!", 2);
	string s4(5, 'H');
	string s5(t.begin(), t.end()); // �ݺ��� ��
	string s6(p1, p2); // ������ ��

	// s: string��ü, sz: '\0' ���ڿ�, c: ����, n: ����, iter: �ݺ���, p: ������
	cout << "s1(): " << s1 << endl;
	cout << "s2(sz): " << s2 << endl;
	cout << "s3(sz, n): " << s3 << endl;
	cout << "s4(n,c): " << s4 << endl;
	cout << "s5(iter1, iter2): " << s5 << endl;
	cout << "s6(p1, p2): " << s6 << endl;

	return 0;
}