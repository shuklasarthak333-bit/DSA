#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

Node* convertToLL(vector<int> &arr){
    Node* head = new Node(arr[0],nullptr);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

int main(){
    vector<int> arr = {5,1,2,3,4,6};
    Node* head = convertToLL(arr);
    cout<<head->data<<"\n";
     // linked list traversal

    Node* temp = head;
    while(temp!= nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0; 
}