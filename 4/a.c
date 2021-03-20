
extern int shared;

int main()
{
    int a = 100;
    swap(&a, &shared);
}

void funA()
{
    int b = 1;
}