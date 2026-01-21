#include<iostream>
using namespace std;
//struct node
struct Node{
    string label; // u/ isi data di tree
    Node *left, *right, *parent; 
};
//penjelasan variable pointer di tree
Node *root = NULL,*newNode = NULL; // linked list
// function u/ create tree
void createtree(string label)
{
if (root!= NULL)
    cout<<"Data Root sudah dibuat !!"<<endl;
else{
    root = new Node();
    root ->label = label;
    root ->left = NULL;
    root ->right = NULL;
    root ->parent = NULL;
    cout<<"Node :" << label <<" Berhasil Ditambahkan menjadi root "<<endl;
    }
}
// insert left
Node *insertleft(string label,Node *node)
{
    if (root == NULL){
    cout<<"Buat Tree / root terlebih dahulu !!"<<endl;
    return NULL;
}else{
   // if buat menampilkan data yang sudah ada
   if (node ->left != NULL){
    cout<<"Node :"<< node->label <<"Berada pada left"<<endl;
    return NULL;
   }else {
    newNode = new Node();
    newNode ->label = label;
    newNode ->left = NULL;
    newNode ->right = NULL;
    newNode ->parent = node;
    node->left = newNode; //proses masukkan data ke level 2
    cout<<"\n Node :" <<label
    <<"berhasil ditambahkan di bagian left"
    <<newNode->parent->label <<endl;
    return newNode;
   }
   // else apabila belum ada data
}
} 
int main(){
    createtree("Owner");
    Node *nodeperusahaan;
    nodeperusahaan = insertleft("Staff",root);
}