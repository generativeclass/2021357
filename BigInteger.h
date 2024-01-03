#ifndef BIGINTEGER_H
#define BIGINTEGER_H
#include<stdio.h>
#include<string.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct BigInteger
{
    struct node *L;
    int length;
}BI;
BI initialize(char *s);
BI rev(struct BigInteger);
BI add(BI, BI);
BI sub(BI, BI);
BI mul(BI, BI);
struct BigInteger div1(BI, BI);
struct BigInteger mod(BI, BI);
struct BigInteger length(BI);
void compare(BI*, BI*);
int comp(BI, BI);
void free_list(BI*);
void display(BI);
#endif
