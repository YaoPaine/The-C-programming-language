//
//  chapter_2_7.c
//  Demo
//
//  Created by YaoPaine on 2017/6/24.
//  Copyright © 2017年 YaoPaine. All rights reserved.
//编写一个函数invert（x,p,n）,该函数返回对x执行下列操作后的结果：将x从第p位开始的n个（二进制）位求反（即1变成0,0变成1），x的其余各位保持不变

#include <stdio.h>

unsigned invert(unsigned int x,int p,int n){
    
    return x^(~(~0<<n)<<(p-n+1));
}
