#include <iostream>
#include "Server.h"

class Node {
public:
	int key;
	Server* data;
	int height;
	Node* left;
	Node* right;
	int subtree_size;
	int traffic_sum;
	Node(int key, Server* data);
};

class AVLTree {
private:
	Node* root;
	int size;
	int height;
public:
	AVLTree();
	~AVLTree();
	void AddNode(int key, Server* data);
	Server* FindNode(int key);
	Node* removeNode(int key);

};

