#include <iostream>
using namespace std;

// ===== STRUCT NODE =====
struct Node {
    string label;
    Node *left, *right, *parent;
};

// ===== GLOBAL POINTER =====
Node *root = NULL;
Node *newNode = NULL;

// ===== CREATE ROOT =====
void createtree(string label) {
    if (root != NULL)
        cout << "Data Root sudah dibuat!\n";
    else {
        root = new Node();
        root->label = label;
        root->left = root->right = root->parent = NULL;
        cout << "Root berhasil dibuat: " << label << endl;
    }
}

// ===== INSERT LEFT =====
Node* insertleft(string label, Node *node) {
    if (!root || !node) {
        cout << "Root atau node aktif belum ada!\n";
        return NULL;
    }

    if (node->left != NULL) {
        cout << "Node kiri sudah ada!\n";
        return NULL;
    }

    newNode = new Node();
    newNode->label = label;
    newNode->left = newNode->right = NULL;
    newNode->parent = node;
    node->left = newNode;

    cout << "Node " << label << " ditambahkan di LEFT dari "
         << node->label << endl;
    return newNode;
}

// ===== INSERT RIGHT =====
Node* insertright(string label, Node *node) {
    if (!root || !node) {
        cout << "Root atau node aktif belum ada!\n";
        return NULL;
    }

    if (node->right != NULL) {
        cout << "Node kanan sudah ada!\n";
        return NULL;
    }

    newNode = new Node();
    newNode->label = label;
    newNode->left = newNode->right = NULL;
    newNode->parent = node;
    node->right = newNode;

    cout << "Node " << label << " ditambahkan di RIGHT dari "
         << node->label << endl;
    return newNode;
}

// ===== UPDATE NODE =====
void update(string label, Node *node) {
    if (!root) {
        cout << "Tree belum dibuat!\n";
    } else if (!node) {
        cout << "Node aktif tidak ada!\n";
    } else {
        string temp = node->label;
        node->label = label;
        cout << "Node " << temp << " berhasil diubah menjadi "
             << label << endl;
    }
}

// ===== PREORDER =====
void preorder(Node *node = root) {
    if (!root) {
        cout << "Tree belum dibuat!\n";
    } else if (node != NULL) {
        cout << node->label << " ";
        preorder(node->left);
        preorder(node->right);
    }
}

// ===== INORDER =====
void inorder(Node *node = root) {
    if (!root) {
        cout << "Tree belum dibuat!\n";
    } else if (node != NULL) {
        inorder(node->left);        // kiri
        cout << node->label << " "; // root
        inorder(node->right);       // kanan
    }
}

// ===== POSTORDER =====
void postorder(Node *node = root) {
    if (!root) {
        cout << "Tree belum dibuat!\n";
    } else if (node != NULL) {
        postorder(node->left);      // kiri
        postorder(node->right);     // kanan
        cout << node->label << " "; // root
    }
}


// ===== MAIN =====
int main() {
    int pilih;
    string label;
    Node *aktif = NULL;

    do {
        cout << "\n===== MENU TREE =====\n";
        cout << "1. Buat Root\n";
        cout << "2. Tambah Node Left\n";
        cout << "3. Tambah Node Right\n";
        cout << "4. Update Node\n";
        cout << "5. Preorder\n";
        cout << "6. Inorder\n";
        cout << "7. Postorder\n";

        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        switch (pilih) {
        case 1:
            cout << "Masukkan label root: ";
            cin >> label;
            createtree(label);
            aktif = root;
            break;

        case 2:
            cout << "Masukkan label node LEFT: ";
            cin >> label;
            aktif = insertleft(label, aktif);
            break;

        case 3:
            cout << "Masukkan label node RIGHT: ";
            cin >> label;
            aktif = insertright(label, aktif);
            break;

        case 4:
            cout << "Masukkan label baru: ";
            cin >> label;
            update(label, aktif);
            break;

        case 5:
            cout << "Preorder: ";
            preorder();
            cout << endl;
            break;


        case 6:
            cout << "Inorder: ";
            inorder();
            cout << endl;
            break;

        case 7:
            cout << "Postorder: ";
            postorder();
            cout << endl;
        break;


        case 0:
            cout << "Program selesai.\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
        }
    } while (pilih != 0);

    return 0;
}
