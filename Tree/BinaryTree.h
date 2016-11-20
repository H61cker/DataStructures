#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef int BTData;

/*

	BTreeNode * MakeBTreeNode(void);
		- 이진트리 노드를 생성하여 그 주소값을 반환한다.
	
	BTData GetData(BTreeNode * bt);
		- 노드에 저장된 데이터를 반환한다.
	
	void SetData(BTreeNode * bt, BTData data);
		- 노드에 데이터를 저장한다. data로 전달된 값을 저장한다. 
		
	BTreeNode * GetLeftSubTree(BTreeNode * bt);
		- 왼쪽 서브 트리의 주소 값을 반환한다.
	
	BTreeNode * GetRightSubTree(BTreeNode * bt);
		- 오른족 서브 트리의 주소 값을 반환한다.
		
	void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub);
		- 왼쪽 서브 트리를 연결한다.
		
	void MakeRightSubTree(BTreeNode * main, BTreeNode * sub);
		- 오른쪽 서브 트리를 연결한다. 

*/

typedef struct _bTreeNode
{
	BTData data;
	struct _bTreeNode * left;
	struct _bTreeNode * right;
} BTreeNode;

BTreeNode * MakeBTreeNode(void); // 노드의 생성 
BTData GetData(BTreeNode * bt); // 노드에 저장된 데이터를 반환 
void SetData(BTreeNode * bt, BTData data); // 노드에 데이터를 저장 

BTreeNode * GetLeftSubTree(BTreeNode * bt);
BTreeNode * GetRightSubTree(BTreeNode * bt);

void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub);
void MakeRightSubTree(BTreeNode * main, BTreeNode * sub);

#endif
