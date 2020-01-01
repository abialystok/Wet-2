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
	void AddNode(Server* data);
	Server* FindServer(int key); //probably don't need this
	int SumHighestTraffics(int k);
	void removeNode(Server* data);

};

