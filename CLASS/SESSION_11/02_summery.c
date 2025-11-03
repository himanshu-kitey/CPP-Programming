// STATIC USE CASE 1, 2, (C LAN)

static int num = 1000;
static void test(void);         // FILE OR TRANSLATIION UNTIL WIDE GLOBAL VARIABLE
static void test(void);         // FILE OR REANSLATION UNTIL WIDE GLOBAL FUNCTION.

int x;      // PROJECT WIDE GLOBAL VARIABLE, WILL REQUIRED EXTERN TYPE DECLERATION BEFORE USING IN OTHER FILES OF PROJECT.
void test2(void);   // PROJECT WIDE GLOBAL, WILL REQUIRED EXTERN TYPE DECLERATION BEFORE USING IN OTHER FILES OF PROJECT.

//STATIC USE CASE 3 (C LAN)

void test(void)
{
    int x;      // dynamic, per function call, stack, function call lifetime
    static int y = 100; // static, once, data, program lifetime
    static int z;           // static, once, bss, program lifetime.
}