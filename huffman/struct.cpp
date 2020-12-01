#include <iostream>
#include <string>

using namespace std;

struct Node {
	Node* left = NULL;
	Node* right = NULL;
	char name;
	int freq;
};

struct Data {
	char* c;
	int* f;
	int N;
} data;

void stampa(Node* head, int n=0){
	cout << endl;
	for (int i=0; i<n; i++)
		cout << "  ";
	cout << "<" << head->name << " x " << head->freq << ">";
	if (head->left != NULL)
		stampa(head->left, n+1);
	if (head->right != NULL)
		stampa(head->right, n+1);
}

int main(int argc, char** argv){

	string message = "Caone come va?";
	cout << message << endl;

	Node* head = new Node;

	stampa(head);
	return 0;
}
