//
//  chapter_2_6.c
//  Demo
//
//  Created by YaoPaine on 2017/6/24.
//  Copyright © 2017年 YaoPaine. All rights reserved.
//编写一个函数setbits(x, p ,n, y)，该函数返回对x执行下列操作后的结果值: 将x中从第p位开始的n个(二进制)位设置为y中最右边n位的值，x的其余各位保持不变。

#include <stdio.h>
unsigned setbits(unsigned int x, int p,int n,int y){
    return x&(~(~0<<n)&y<<(p+1-n))|(~(~(~0<<n)<<(p+1-n)));
}
