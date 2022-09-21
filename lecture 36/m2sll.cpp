#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
	node(int d){
		data = d;
		next = NULL;
	}
};

void printlist(node* &head){
	if(head == NULL){
		cout<<"Linked List is empty\n";
		return;
	}
	node * temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" -> ";
		temp = temp->next;
	}cout<<"NULL\n";
}

void insertatbegin(int d, node * &head, node * &tail){
	if(head == NULL){
		node * temp = new node(d);
		head = tail = temp;
	}
	else{
		node * temp = new node(d);
		temp->next = head;
		head = temp;
	}
}

void insertatend(int d, node * &head, node * &tail){
	if(tail == NULL){
		node * temp = new node(d);
		head = tail = temp;
	}
	else{
		node * temp = new node(d);
		// temp = tail -> next;
		tail -> next = temp;
		tail = temp;
	}
}

void deletefrombegin(node * &head, node * &tail){
	if(head == NULL){
		return;
	}else if(head == tail){
		delete head;
		// node * temp = head;
		head = tail = NULL;
	}else{
		node *temp = head;
		head = head->next;
		delete temp;
	}
}

void deletefromend(node * &head, node * &tail){
	if(head == NULL){
		return;
	}else if(head == tail){
		delete head;
		// node * temp = head;
		head = tail = NULL;
	}else{
		node *temp = head;
		while(temp->next->next!=NULL){
			temp = temp -> next;
		}
		delete temp->next;
		temp->next = NULL;
		tail = temp;
	}
}

node* findmid(node * &head){
	if(head == NULL){
		return head;
	}
	else{
		node * fast = head;
		node * slow = head;
		while(fast->next!=NULL && fast->next->next != NULL){
			slow = slow->next;
			fast = fast->next->next;
		}
		return slow;
	}
}

void insertatmid(int d, node * &head, node * &tail){
	if(head == NULL){
		node * temp = new node(d);
		head = tail = temp;
	}else if(head == tail){
		node * temp = new node(d);
		temp->next = head;
		head = temp;
	}
	else{
		node * fast = head;
		node * slow = head;
		while(fast->next!=NULL && fast->next->next != NULL){
			slow = slow->next;
			fast = fast->next->next;
		}
		node * temp = new node(d);
		temp->next = slow->next;
		slow->next = temp;
	}
}

void deleteatmid(node * &head, node *& tail){
	if(head == NULL){
		cout<<"Linked List is already empty\n";
		return;
	}else if(head == tail){
		node * temp = head;
		head = tail = NULL;
		delete temp;
	}else{
		node * prev = head;
		node * fast = head;
		node * slow = head;
		while(fast->next!=NULL && fast->next->next!=NULL){
			prev = slow;
			fast = fast->next->next;
			slow = slow->next;
		}
		if(slow == head){
			head = slow->next;
			delete slow;
		}
		else{
			prev -> next = slow -> next;
			delete slow;	
		}
	}
}

node * m2sll(node * head1, node * head2){
	// base case
	if(head1 == NULL){
		return head2;
	}else if(head2 == NULL){
		return head1;
	}
	// recursive case
	if(head1->data < head2->data){
		head1->next = m2sll(head1->next, head2);
		// head2 = head1;
		return head1;
	}else{
		head2->next = m2sll(head1, head2->next);
		return head2;
	}
}

node * mergesort(node* head){
	// base case
	if(head->next == NULL){
		return head;
	}
	// recursive case
	// finding the middle node
	node * mid = findmid(head);
	// dividing the linked list into 2 parts
	node * head2 = mid -> next;
	mid->next = NULL;
	// sorting the 2 divided linked lists
	head = mergesort(head);
	head2 = mergesort(head2);
	// merging the linked lists into one sorted linked list
	return m2sll(head, head2);
}

int main(){

	node * head = NULL, *tail = NULL;

	insertatend(5, head, tail);
	insertatend(4, head, tail);
	insertatend(3, head, tail);
	insertatend(2, head, tail);
	insertatend(1, head, tail);
	
	printlist(head);
	head = mergesort(head);
	printlist(head);

	// node *head1, *tail1, *head2, *tail2;
	// head1 = tail1 = head2 = tail2 = NULL;

	// insertatend(5, head1, tail1);
	// insertatend(10, head1, tail1);
	// insertatend(20, head1, tail1);

	// insertatend(15, head2, tail2);
	// insertatend(25, head2, tail2);
	// insertatend(35, head2, tail2);

	// node *head3, *tail3;
	// tail3 = NULL;
	// head3 = m2sll(head1, head2);

	// printlist(head3);

	return 0;
}