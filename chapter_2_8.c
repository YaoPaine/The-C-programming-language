//
//  chapter_2_8.c
//  Demo
//
//  Created by YaoPaine on 2017/6/24.
//  Copyright © 2017年 YaoPaine. All rights reserved.
//编写一个函数rightrot(x,n)，该函数返回将x循环右移（即从最右端移出的位将从最左端再移入）n位二进制位后所得到的数

#include <stdio.h>

void rightrot(unsigned int x,int n){
    int word_length(void);
    if(n=n%word_length()>0){
        return x>>(word_length()-n)|x<<(n);
    }
    return x;
}

void rightrot_c(unsigned int x,int n){
    int word_length(void);
    while(n-->0){
       x= x&1<<(word_length()-1)|(x>>1);
    }
    return x;
}

int word_length(void){
    int i;
    unsigned x = (unsigned) ~0;
    for (i=0;(x=x>>1)>0; i++);
    return i;
}
