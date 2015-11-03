// авторы кода, студентки ФКН ДПИ
// Горденко Мария
// Екатерина Чиркова
// школа повышения квалификации учителей 
// лето 2015
#include <iostream>
using namespace std;
void show();
void add(int value);
void del(int value);
// элемент односвязного списка
struct Node {
	int value;
	Node *next; // указатель на следующий элемент
};
Node *Head = NULL; // начало списка
// добавление элемента в список
void add(int value) {
	Node *temp = new Node;
	temp->next = NULL;
	temp->value = value;
	if (Head != NULL) {
		if (Head->next != NULL) {
			Node *tail = Head;
			while (tail->next != 0)
				tail = tail->next;
			tail->next = temp;
		}
		else {
			Head->next = temp;
		}
	}
	else {
		Head = temp;
	}
}
// удаление элемента со значением value
void del(int value) {
	Node *temp = Head;
	if (!temp) {
		return;
	}
	if (temp->value == value) {
		Head = temp->next;
		return;
	}
	while (temp->next != NULL && temp->next->value != value) {
		temp = temp->next;
	}
	if (temp->next == NULL) {
		cout << "No node with value - " << value << endl;
		return;
	}
	Node *temp_1 = temp->next->next;
	delete temp->next;
	temp->next = temp_1;
}
// вывести все элементы списка
void show() {
	Node *temp = Head;
	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	}
	cout << "\n";
}
int main() {
	Head = NULL;
	add(1);
	add(2);
	add(93);
	add(4);
	add(5);
	show();
	del(1);
	del(93);
	del(5);
	show();
	system("pause");
}