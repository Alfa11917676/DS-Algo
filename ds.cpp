#include<iostream>
using namespace std;
class ds{
	public:
	int data;
	ds* next;

		ds(int d){
		data =d;
		next=NULL;		
		}
};
void getDataAtFront(ds* &head,ds* &tail, int data){
	ds* nn;
	if(head==NULL){
		 nn=new ds (data);
		head=tail=nn;
	}else{
		nn=new ds (data);
		nn->next=head;
		head=nn;
	}
}
void getDataAtLast(ds* &head,ds* &tail,int data){
	ds* nn;
	if(head==NULL){
		nn=new ds(data);
		head=tail=nn;
	}
	else{
		nn=new ds(data);
		nn->next=tail;
		tail=nn;
	}
}

void printFuntion(ds* temp){
	while(temp!=NULL){
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
	cout<<endl;
}
void deleteContent(ds* &head,ds* &tail){
	if(head==NULL){
		cout<<"Underflow stack";
	}	
	else if(head->next==NULL){
		delete head;
		head=tail=NULL;	
}
else{
	ds* temps=head;
	head=head->next;
	delete temps;
	}
}	
main()
{
	ds* head=NULL;
	ds* tail=NULL;
	
	getDataAtFront(head,tail,12);
	getDataAtFront(head,tail,13);
	getDataAtFront(head,tail,14);
	printFuntion(head);
	getDataAtLast(head,tail,15);
	getDataAtLast(head,tail,16);
	printFuntion(head);
//	deleteContent(head,tail);
//	printFuntion(head);



}
