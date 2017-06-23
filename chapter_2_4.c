//
//  chapter_2_4.c
//  Demo
//
//  Created by 何瑶 on 2017/6/23.
//  Copyright © 2017年 何瑶. All rights reserved.
//

#include <stdio.h>

void squeeze(char s[],char t[]){
#if true
    int i,m,n;
    i=m=n=0;
    while (s[i]!='\0') {
        int j=0;
        while (t[j]!='\0') {
            if (s[i]==t[j++]) {
                n=1;
            }
        }
        if (n==0) {
            s[m++]=s[i++];
        }else{
            i++;
        }
        n=0;
    }
    s[m]='\0';
#endif
    int i,j,k;
    for (i=k=0; s[i]!='\0'; ++i) {
        for (j=0; t[j]!='\0'&&s[i]!=t[j]; ++j);
        if (t[j]=='\0') {
            s[k++]=s[i];
        }
    }
    s[k]='\0';
    printf("s[]=%s\n",s);
}
