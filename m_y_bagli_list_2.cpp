#include <iostream>
using namespace std;
struct node {
    int data;
    struct node* next;
};
struct node* basaEkle(struct node* head, int key) {
    if (head == NULL) {
        struct node* temp = new node();
        temp->data = key;
        temp->next = NULL;
        head = temp;
        cout << "ilk eleman olusturuldu!"<<endl;
    }
    else {
        struct node* temp = new node();
        temp->data = key;
        temp->next = head;
        head = temp;
        cout << "basa eleman eklendi!"<<endl;
    }
    return head;
}
struct node* sonaEkle(struct node* head, int key) {
    if (head == NULL) {
        struct node* temp = new node();
        temp->data = key;
        temp->next = NULL;
        head = temp;
        cout << "yeni dugum olusturuldu!"<<endl;
    }
    else {
        struct node* temp = new node();
        temp->data = key;
        temp->next = NULL;

        struct node* temp2 = head;
        while (temp2->next!= NULL) 
            temp2 = temp2->next;

        temp2->next = temp;
        cout << "sona eleman eklendi!"<<endl;
    }
    return head;
}
struct node* yazdir(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "\t";
        temp = temp->next;
    }
    return head;
}
int main(){
    struct node* head = NULL;
    head = basaEkle(head, 11);
    head = basaEkle(head, 7);
    head = basaEkle(head, 5);
    head = sonaEkle(head, 13);
    head = sonaEkle(head, 17);

    cout<<yazdir(head);
    return 0;
}
