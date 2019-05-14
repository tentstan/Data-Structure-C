/*
 * =====================================================================================
 *
 *       Filename:  SeqBinaryTree_main.c
 *
 *    Description:  SeqBinaryTree_main c source file 
 *
 *        Version:  1.0
 *        Created:  05/14/2019 04:40:05 PM
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

#include "SeqBinaryTree.c"

void PrintElem(char c);

int main(int argc,char* argv[])
{
    SqBiTree T;

    Printf("test InitBiTree_Sq\n");
    {
        printf("start init\n");
        InitBiTree_Sq(T);
        printf("\n");
    }
    PressEnter;

    printf("test BiTreeEmpty_Sq \n");
    {
        BiTreeEmpty_Sq(T) ? printf("T is Empty!\n") : printf(" T is not Empty!\n");
        printf("\n");
    }
    PressEnter;

    printf("test CreateBiTree_Le_Sq\n");
    {
        FILE* fp;

        printf("Start create by level order\n");
        fp = open("TestData_Le.txt","r");
        CreateBiTree_Le_Sq(fp,T);
        fclose(fp);
        printf("\n");
    }
    PressEnter;

    printf("test CreateBiTree_Pre_Sq\n");
    {
        FILE* fp;
        printf("Start Create by Pre\n");
        fp = fopen("TestData_Pre.txt","r");
        CreateBiTree_Pre_Sq(fp,T,0);
        fclose(fp);
        printf("\n");
    }
    PressEnter;

    printf("Test print\n");
    {
        printf("start prinf\n");
        Print_Sq(T);
        printf("\n");
    }
    PressEnter;

    printf("test length and depth\n");
    {
        printf("Length:%d,Depth:%d \n",BiTreeLength_Sq(T),BiTreeDepth_Sq(T));
        printf("\n");
    }
    PressEnter;

    printf("test LevelOrderTraverse\n");
    {
        printf("start level-order-traverse\n");
        LevelOrderTraverse_Sq(T,PrintElem);
        printf("\n\n");
    }
    PressEnter;

    printf("test preOrder\n");
    {
        printf("start preOrder\n");
        PreOrderTraverse_Sq(T,PrintElem,0);
        printf("\n\n");
    }
    PressEnter;

    print("test inOrder\n");
    {
        printf("start inOrder\n");
        InOrderTraverse_Sq(T,PrintElem,0);
        printf("\n\n");
    }
    PressEnter;

    printf("test postOrder\n");
    {
        printf("start post order\n");
        PostOrderTraverse_Sq(T,PrintElem,0);
        printf("\n\n");
    }
    PressEnter;

    printf("test root\n");
    {
        printf("start root\n");
        TElementType_Sq r;
        Root_Sq(T,&r);
        printf("root is %c",r);
        printf("\n");
    }
    PressEnter;

    printf("test value\n");
    {
        Position p = {4,3};
        printf("row:%d,queue:%d,value:%c\n",p.level,p.order,Value_Sq(T,p));
        printf("\n");
    }
    PressEnter;

    printf("test assign\n");
    {
        Position p = {4,3};
        printf("before assign,value:%c\n",Value_Sq(T,p));
        Assign_Sq(T,p,'X');
        printf("after assign,value:%c\n",Value_Sq(T,p));
        Print_Sq(T);
        printf("\n");
    }
    PressEnter;

    printf("test Parent\n");
    {
        printf("  'X' parent:%c\n ",Parent_Sq(T,'X'));
        printf("\n");
    }
    PressEnter;

    printf("test left,right child\n");
    {
        printf("'E' left child:%c,right child:%c\n",LeftChild_Sq(T,'E'),RightChild_Sq(T,'E'));
        printf("\n");
    }
    PressEnter;

    printf("test left sibling\n");
    {
        printf("'E' left sibling:%c\n",LeftSibling_Sq(T,'E'));
        printf("\n");
    }
    PressEnter;

    printf("test right sibling\n");
    {
        printf("'I' right sibling:%c\n",RightSibling_Sq(T,'I'));
        printf("\n");
    }
    PressEnter;

    printf("test Clear\n");
    {
        ClearBiTree_Sq(T);
        if(BiTreeEmpty_Sq(T))
        {
            printf("T is clear\n");
        }
        printf("\n");
    }
    PressEnter;
    
    return 0;
}

void PrintElem(char c)
{
    printf("%c ",c);

    return;
}
