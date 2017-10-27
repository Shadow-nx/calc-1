#include <iostream>
using namespace std;
struct Node {
        int data;
        Node *next;
};
int main(){

        Node * first = nullptr;
        first=nullptr;
        Node * last = nullptr;
        last=nullptr;
        Node *current=nullptr;


        int n=0;
        while(cin>>n) {
                Node *node=new Node {n,nullptr};
                if(current == nullptr){
                current=node;
                first=current;
                continue;
                }
                current->next = node;
                current = node;
        }

        last = current;

        Node *curr=first;
        do {
                cout<<curr->data;
                if(curr->next!=nullptr)
                        cout<<" -> ";
                curr=curr->next;
        } while (curr!=nullptr);

        cout<<endl;

return 0;
}
