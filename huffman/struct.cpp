#include <iostream>

using namespace std;

struct Node {
	Node* left = NULL;
	Node* right = NULL;
	char name;
	int freq;
};

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
	
	Node* head = new Node;
	head->name = 'f';
	head->freq = 25;
	head->left = new Node;
	head->left->name = 'g';
	head->left->freq = 20;
	
	stampa(head);
	
	
	return 0;
}
