#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef int BTData;

/*

	BTreeNode * MakeBTreeNode(void);
		- ����Ʈ�� ��带 �����Ͽ� �� �ּҰ��� ��ȯ�Ѵ�.
	
	BTData GetData(BTreeNode * bt);
		- ��忡 ����� �����͸� ��ȯ�Ѵ�.
	
	void SetData(BTreeNode * bt, BTData data);
		- ��忡 �����͸� �����Ѵ�. data�� ���޵� ���� �����Ѵ�. 
		
	BTreeNode * GetLeftSubTree(BTreeNode * bt);
		- ���� ���� Ʈ���� �ּ� ���� ��ȯ�Ѵ�.
	
	BTreeNode * GetRightSubTree(BTreeNode * bt);
		- ������ ���� Ʈ���� �ּ� ���� ��ȯ�Ѵ�.
		
	void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub);
		- ���� ���� Ʈ���� �����Ѵ�.
		
	void MakeRightSubTree(BTreeNode * main, BTreeNode * sub);
		- ������ ���� Ʈ���� �����Ѵ�. 

*/

typedef struct _bTreeNode
{
	BTData data;
	struct _bTreeNode * left;
	struct _bTreeNode * right;
} BTreeNode;

BTreeNode * MakeBTreeNode(void); // ����� ���� 
BTData GetData(BTreeNode * bt); // ��忡 ����� �����͸� ��ȯ 
void SetData(BTreeNode * bt, BTData data); // ��忡 �����͸� ���� 

BTreeNode * GetLeftSubTree(BTreeNode * bt);
BTreeNode * GetRightSubTree(BTreeNode * bt);

void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub);
void MakeRightSubTree(BTreeNode * main, BTreeNode * sub);

#endif
