#include <iostream>

using namespace std;

struct Node {
	int data;
	Node *next;
};

int main() {

	//Node *first=new Node {1,nullptr};
	//Node *second=new Node {2,nullptr};
	//first->next=second;

	//Node *second=new Node {2,nullptr};
	//Node *first=new Node {1,second};

	Node * first = new Node;
	first=nullptr;
	Node * last = new Node;
 	last=nullptr;

	int n=0;
	while(cin>>n) {
		Node *node=new Node {n,nullptr};
		node->data=n;
		node->next=first;
		first = node;
	}

	Node *curr=first;
	do {
		cout<<curr->data;
		if(curr->next!=nullptr)
			cout<<" -> ";
		curr=curr->next;
	} while (curr!=nullptr);

	return 0;
}
