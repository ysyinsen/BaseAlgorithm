#include <iostream>
#include <vector>
using namespace std;

struct listNode {
	int value;
	listNode* next;
	listNode(int v) {
		value = v, next = NULL;
	}
};
listNode* head = NULL;
listNode* tail = NULL;
int a[]{ 1,2,3,4,5,6,7,8,9 };
int n = sizeof(a) / sizeof(int);
int index = 0;

void build_list() {
	listNode* p = NULL;
	while (index < n) {
		p = new listNode(a[index++]);
		if (head == NULL) head = p;
		else tail->next = p;
		tail = p;
	}
}
void printlist() {
	listNode* p = head;
	while (p) {
		cout << p->value << endl;
		p = p->next;
	}
}
void freelist()
{
	listNode* p = head;
	while (p) {
		listNode* next = p->next;
		delete p;
		p = next;
	}
	head = NULL;
	tail = NULL;
}

int main()
{
	build_list();
	printlist();

	system("pause");
	freelist();
}