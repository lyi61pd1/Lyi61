#include <stdio.h>
 
int count ;
extern void write_extern();
extern int hello;
int* test(){
    int a;
    a=5;
    printf("address of a is %d",&a);
    return &a;

}
int main(){
    hello=1;
    printf("hello %d\n",hello);
    count = 5;
    write_extern();
    int* b=test();
    printf("b is %p\n",*b);
    return 0;
hello
 world
 嘻嘻嘻
 删了啥东西
 偷偷加一行
}
