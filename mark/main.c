//
//  main.c
//  mark
//
//  Created by 20161104568 on 2018/6/25.
//  Copyright © 2018年 20161104568. All rights reserved.
//

#include <stdio.h>10

void main()
{ float score[10];
    float min,max,ave;
    float sum=0.0;
    int i;
    printf("input 10 score:\n");
    for(i=0;i<10;i++) scanf("%f",&score[i]);
    printf("\n");
    min=score[0];
    max=score[0];
    for(i=0;i<10;i++){
        sum=sum+score[i];
        if(score[i]>max) max=score[i];
        if(score[i]<min) min=score[i];
    }
    ave=(sum-max-min)/8;
    printf("The max=%f\n",max);
    printf("The min=%f\n",min);
    printf("The ave=%f\n",ave);
}
