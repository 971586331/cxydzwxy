
#include <stdio.h>

int printf(const char * format, ...);

int global_init_var = 84;
int global_uinit_var;

void func1(int i)
{
    printf("%d \n", i);
}

extern char __executable_start[];
extern char etext[], _etext[], __etext[];
extern char edata[], _edata[];
extern char end[], _end[];

int main()
{
    static int static_var = 85;
    static int static_var2;
    int a = 1;
    int b;

    func1(static_var + static_var2 + a + b);
    printf("global_init_var = %p \n", &global_init_var);

    printf("executable start %x \n", __executable_start);
    printf("text end %x %x %x \n", etext, _etext, __etext);
    printf("data end %x %x \n", edata, _edata);
    printf("executable end %x %x \n", end, _end);

    return a;
}