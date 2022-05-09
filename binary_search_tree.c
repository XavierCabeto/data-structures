#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	
	struct Node* left;
	
	struct Node* right;
};

struct Node* get_new_node(int data) {
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	
	new_node->data = data;
	
	new_node->left = new_node->right = NULL;
	
	return new_node;
}

struct Node* insert(struct Node* root, int data) {
	if (root == NULL) root = get_new_node(data);
	
	else if (data <= root->data) root->left = insert(root->left, data);
	
	else root->right = insert(root->right, data);
	
	return root;
}

int search(struct Node* root, int data) {
	if (root == NULL) return 0;
	
	else if (root->data == data) return 1;
	
	else if (data <= root->data) return search(root->left, data);
	
	else return search(root->right, data);
}

int main() {
	struct Node* root = NULL;
	
	root = insert(root, 1);
	
	root = insert(root, 3);
	
	root = insert(root, 2);
	
	int n;
	
	printf("Enter number be searched\n");
	
	scanf("%d", &n);
	
	printf(search(root, n) ? "Found\n" : "Not found\n");
	
	return 0;
}
