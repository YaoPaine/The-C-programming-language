//
//  chapter_2_5.c
//  Demo
//
//  Created by YaoPaine on 2017/6/23.
//  Copyright © 2017年 YaoPaine. All rights reserved.
//

#include <stdio.h>

int any(char s1[],char s2[]){
    int i,j;
    for (i=0; s1[i]!='\0'; ++i) {
        for (j=0; s2[j]!='\0'&&s1[i]!=s2[j]; ++j);
        if (s2[j]!='\0') {
            return i;
        }
    }
    return -1;
}
