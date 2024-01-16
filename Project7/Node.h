#pragma once

using namespace System::Drawing;

public ref class Node{
public:
    int value;
    int color;
    Node^ left;
    Node^ right;
    Node^ parent;
};

public ref class RedBlackTree {
public:
    RedBlackTree() : root(nullptr) {}
Node^ root;
    void insert(int value) {
        auto node = gcnew Node();
        node->value = value;
        node->color = 1;
        node->left = nullptr;
        node->right = nullptr;
        node->parent = nullptr;


        if (root == nullptr) {
            root = node;
        }
        else {
            Node^ current = root;
            while (true) {
                if (value < current->value) {
                    if (current->left == nullptr) {
                        current->left = node;
                        node->parent = current;
                        break;
                    }
                    else {
                        current = current->left;
                    }
                }
                else {
                    if (current->right == nullptr) {
                        current->right = node;
                        node->parent = current;
                        break;
                    }
                    else {
                        current = current->right;
                    }
                }
            }
            fixInsert(node);
        }
    }

    bool search(int value) {
        Node^ current = root;
        while (current != nullptr) {
            if (value == current->value) {
                return true;
            }
            else if (value < current->value) {
                current = current->left;
            }
            else {
                current = current->right;
            }
        }
        return false;
    }
    
void remove(int value) {
        Node^ node = root;
        while (node !=nullptr) {
            if (value < node->value) {
                node = node->left;
            }
            else if (value > node->value) {
                node = node->right;
            }
            else {
                deleteNode(node);
                return;
            }
        }
    }
private:


    void fixInsert(Node^ node) {
        if (node->parent->parent != nullptr) {
            while (node != root && node->parent->color == 1) {
                if (node->parent == node->parent->parent->left) {
                    Node^ uncle = node->parent->parent->right;
                    if (uncle != nullptr && uncle->color == 1) {
                        node->parent->color = 2;
                        uncle->color = 2;
                        node->parent->parent->color = 1;
                        node = node->parent->parent;
                    }
                    else {
                        if (node == node->parent->right) {
                            node = node->parent;
                            rotateLeft(node);
                        }
                        node->parent->color = 2;
                        node->parent->parent->color = 1;
                        rotateRight(node->parent->parent);
                    }
                }
                else {
                    Node^ uncle = node->parent->parent->left;
                    if (uncle != nullptr && uncle->color == 1) {
                        node->parent->color = 2;
                        uncle->color = 2;
                        node->parent->parent->color = 1;
                        node = node->parent->parent;
                    }
                    else {
                        if (node == node->parent->left) {
                            node = node->parent;
                            rotateRight(node);
                        }
                        node->parent->color = 2;
                        node->parent->parent->color = 1;
                        rotateLeft(node->parent->parent);
                    }
                }
            }
            root->color = 2;
        }
    }

    void rotateLeft(Node^ node) {
        Node^ rightChild = node->right;
        node->right = rightChild->left;
        if (rightChild->left != nullptr) {
            rightChild->left->parent = node;
        }
        rightChild->parent = node->parent;
        if (node == root) {
            root = rightChild;
        }
        else if (node == node->parent->left) {
            node->parent->left = rightChild;
        }
        else {
            node->parent->right = rightChild;
        }
        rightChild->left = node;
        node->parent = rightChild;
    }

    void rotateRight(Node^ node) {
        Node^ leftChild = node->left;
        node->left = leftChild->right;
        if (leftChild->right != nullptr) {
            leftChild->right->parent = node;
        }
        leftChild->parent = node->parent;
        if (node == root) {
            root = leftChild;
        }
        else if (node == node->parent->left) {
            node->parent->left = leftChild;
        }
        else {
            node->parent->right = leftChild;
        }
        leftChild->right = node;
        node->parent = leftChild;
    }
    

    void deleteNode(Node^ node) {
        Node^ brother;
        if (node == node->parent->right) {
            brother = node->parent->left;
        }
        else {
            brother = node->parent->right;
        }

        if (node->left == nullptr && node->right == nullptr) {
            if (node->parent != nullptr && node->color == 1) {
                if (node == node->parent->right) {
                    node->parent->right = nullptr;
                }
                else {
                    node->parent->left = nullptr;
                }
            }
            else if (node->parent != nullptr && node->color == 2) {
                if (node->parent->color == 1) {
                    if (brother->left != nullptr) {
                        if (brother->left->color == 1) {
                            rotateRight(node->parent);
                            if (node == node->parent->right) {
                                node->parent->right = nullptr;
                            }
                            else {
                                node->parent->left = nullptr;
                            }
                        }
                        else {
                            node->parent->color = 2;
                            brother->color = 1;
                            if (node == node->parent->right) {
                                node->parent->right = nullptr;
                            }
                            else {
                                node->parent->left = nullptr;
                            }
                        }
                    }
                    else {
                        node->parent->color = 2;
                        brother->color = 1;
                        if (node == node->parent->right) {
                            node->parent->right = nullptr;
                        }
                        else {
                            node->parent->left = nullptr;
                        }
                    }
                }
            }
            else if (node->parent == nullptr) {
                root = nullptr;
            }
        }
        else if (node->color == 2 && node->parent != nullptr) {
            if (node->left == nullptr && node->right != nullptr) {
                node->right->color = 2;
                node->parent->right = node->right;
            }
            if (node->left != nullptr && node->right == nullptr) {
                node->left->color = 2;
                node->parent->left = node->left;
            }
        }
    }

    
    
    

};


