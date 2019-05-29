/*
 * =====================================================================================
 *
 *       Filename:  BinaryTree_main.c
 *
 *    Description:  BinaryTree_main c source file 
 *
 *        Version:  1.0
 *        Created:  05/29/2019 02:39:03 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

#include "BinaryTree.h"

void PrintElem(TElemType e);
Status PrintElement(TElemType e);


void test_InitBiTree(BiTree T);
void test_BiTreeEmpty(BiTree T);
void test_CreateBiTree(BiTree T);
void test_PrintTree(BiTree T);
void test_BiTreeDepth_and_Length(BiTree T);
void test_LevelOrderTraverse(BiTree T);
void test_PreOrderTraverse_1(BiTree T);
void test_PreOrderTraverse_2(BiTree T);
void test_InOderTraverse_1(BiTree T);
void test_InOderTraverse_2(BiTree T);
void test_InOderTraverse_3(BiTree T);
void test_PostOrderTraverse(BiTree T);
void test_BiTree_Root(BiTree T);
void test_BiTree_Value(BiTree T);
void test_BiTree_Assign(BiTree T);
void test_BiTree_Parent(BiTree T);
void test_BiTree_lchild(BiTree T);
void test_BiTree_rchild(BiTree T);
void test_BiTree_lsibling(BiTree T);
void test_BiTree_rsibling(BiTree T);
void test_BiTree_Insert(BiTree T);
void test_BiTree_Delete(BiTree T);
void test_BiTree_Clear(BiTree T);


int main(int argc,char* argv[])
{
    BiTree T;

    test_InitBiTree(T);

    test_BiTreeEmpty(T);

    test_CreateBiTree(T);

    test_PrintTree(T);

    test_BiTreeDepth_and_Length(T);

    test_LevelOrderTraverse(T);

    test_PreOrderTraverse_1(T);

    test_PreOrderTraverse_2(T);

    test_InOderTraverse_1(T);

    test_InOderTraverse_2(T);

    test_InOderTraverse_3(T);

    test_PostOrderTraverse(T);

    test_BiTree_Root(T);

    test_BiTree_Value(T);

    test_BiTree_Assign(T);

    test_BiTree_Parent(T);

    test_BiTree_lchild(T);

    test_BiTree_rchild(T);

    test_BiTree_lsibling(T);

    test_BiTree_rsibling(T);

    test_BiTree_Insert(T);

    test_BiTree_Delete(T);

    test_BiTree_Clear(T);
}

void PrintElem(TElemType e)
{
    printf("%c ",e);
}

Status PrintElement(TElemType e)
{
    printf("%c ",e);
    return OK;
}

void test_InitBiTree(BiTree T)
{
    printf("InitBiTree.....\n");
    InitBiTree(&T);
    printf("\n");
    PressEnter;
}

void test_BiTreeEmpty(BiTree T)
{
    printf("BiTreeEmpty......\n");
    BiTreeEmpty(T) ? printf("BiTree is Empty\n") : printf("BiTree is not empty\n");
    printf("\n");
    PressEnter;
}

void test_CreateBiTree(BiTree T)
{
    FILE* fp;

    printf("CreateBiTree..........\n");
    printf("for example,read seq: ABDG^^^EH^^I^^CF^J^^^\n");
    fp = fopen("TestData_T.txt","r");
    CreateBiTree(fp,&T);
    fclose(fp);
    printf("\n");
    PressEnter;
}

void test_PrintTree(BiTree T)
{
    printf("printTree......\n");
    PrintTree(T);
    printf("\n");
    PressEnter;
}

void test_BiTreeDepth_and_Length(BiTree T)
{
    printf("BiTreeDepth and length......\n");
    printf("Depth:%d,length:%d\n",BiTreeDepth(T),BiTreeLength(T));
    printf("\n");
    PressEnter;
}

void test_LevelOrderTraverse(BiTree T)
{
    printf("LevelOrderTraverse......\n");
    LevelOrderTraverse(T,PrintElem);
    printf("\n");
    PressEnter;
}

void test_PreOrderTraverse_1(BiTree T)
{
    printf("PreOrderTraverse_1......\n");
    PreOrderTraverse_1(T,PrintElem);
    printf("\n");
    PressEnter;
}

void test_PreOrderTraverse_2(BiTree T)
{
    printf("PreOrderTraverse_2.......\n");
    PreOrderTraverse_2(T,PrintElem);
    printf("\n");
    PressEnter;
}

void test_InOderTraverse_1(BiTree T)
{
    printf("InOrderTraverse_1......\n");
    InOrderTraverse_1(T,PrintElem);
    printf("\n");
    PressEnter;
}


void test_InOderTraverse_2(BiTree T)
{
    printf("InOrderTraverse_2......\n");
    InOrderTraverse_2(T,PrintElem);
    printf("\n");
    PressEnter;
}

void test_InOderTraverse_3(BiTree T)
{
    printf("InOrderTraverse_3......\n");
    InOrderTraverse_3(T,PrintElem);
    printf("\n");
    PressEnter;
}

void test_PostOrderTraverse(T)
{
    printf("PostOrsertraverse.......\n");
    PostOrsertraverse(T);
    printf("\n");
    PressEnter;
}

void test_BiTree_Root(BiTree T)
{
    printf("BiTree Root.....\n");
    TElemType e;

    Root(T,&e);

    printf("T root is %c \n",e);
    printf("\n");
    PressEnter;
}

void test_BiTree_Value(BiTree T)
{
    printf("BiTree Value....\n");
    BiTree p = T->lchild->rchild->lchild;

    printf(" p value is :%c\n",Value(p));
    printf("\n");
    PressEnter;
}

void test_BiTree_Assign(BiTree T)
{
    printf("BiTree Assign......\n");
    BiTree p = T->lchild->rchild->lchild;
    
    printf("after assigned, p is:%c\n",Value(p));

    Assign(p,'X');
    
    printf("after assigned, p is:%c\n",Value(p));
    PrintTree(T);
    printf("\n");
    PressEnter;
}

void test_BiTree_Parent(BiTree T)
{
    printf("BiTree Parent......\n");
    printf("X parent:%c\n",Parent(T,'X'));
    printf("\n");
    PressEnter;
}

void test_BiTree_lchild(BiTree T)
{
    printf("BiTree lchild....\n");
    printf(" 'E' lchild:%c \n",LeftChild(T,'E'));
    printf("\n");
    PressEnter;
}

void test_BiTree_rchild(BiTree T)
{
    printf("BiTree rchild......\n");
    printf(" 'E' rchild:%c\n ",RightChild(T,'E'));
    printf("\n");
    PressEnter;
}

void test_BiTree_lsibling(BiTree T)
{
    printf("BiTree lsibling......\n");
    printf(" 'I' lsibling:%c \n",LeftSibling(T,'I'));
    printf("\n");
    PressEnter;
}


void test_BiTree_rsibling(BiTree T)
{
    printf("BiTree rsibling......\n");
    printf(" 'X' rsibling:%c \n",RightSibling(T,'X'));
    printf("\n");
    PressEnter;
}

void test_BiTree_Insert(BiTree T)
{
    FILE* fp;
    BiTree T0;

    printf("create and print binary tree T0:\n");

    InitBiTree(&T0);
    fp = fopen("TestData_T0.txt","r");
    CreateBiTree(fp,&T0);
    fclode(fp);

    PrintTree(T0);

    InsertBiTree(T,'E',T0,0);

    PrintTree(T);

    printf("\n");

    PressEnter;
}

void test_BiTree_Delete(BiTree T)
{
    printf("Bitree Delete....\n");
    printf("before delete:\n");
    PrintTree(T);
    DeleteBiTree(T,'1',1);
    printf("after delete:\n");
    PrintTree(T);
    printf('\n');
    PressEnter;
}

void test_BiTree_Clear(BiTree T)
{
    printf("BiTree Clear.....\n");
    ClearBiTree(&T);
    if(BiTreeEmpty(T))
    {
        printf("T is Cleared.\n");
    }
    printf("\n");
    PressEnter;
}
