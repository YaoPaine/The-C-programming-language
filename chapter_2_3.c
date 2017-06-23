//
//  chapter_2.c
//  Demo
//
//  Created by 何瑶 on 2017/6/23.
//  Copyright © 2017年 何瑶. All rights reserved.
//

#include <stdio.h>

long htoi(char s[]){
    if (strlen(s)<3) {
        return -1;//不是十六进制数
    }
    long i_number=0;
    for(int i=2;i<strlen(s);i++){
        long result=0;
        if (s[i]>='0'&&s[i]<='9') {
            result+=s[i]-'0';
        }else if(s[i]>='a'&&s[i]<='f'){
            result+=10+s[i]-'a';
        }else if(s[i]>='A'&&s[i]<='F'){
            result+=10+s[i]-'A';
        }else{
            printf("this is not a hex number");
        }
        //        printf("result=%d\n",result);
        i_number=16*i_number+result;
        //        printf("i_number=%d\n",i_number);
    }
    return i_number;
}



