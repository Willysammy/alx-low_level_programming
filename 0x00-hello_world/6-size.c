@@ -3,8 +3,7 @@
/**
 * main - to produce the size of strings
 *
 * Description: produce size of strings in byte
 * Return: 0
 */

@@ -18,8 +17,8 @@ int main(void)
{
printf(”Size of a char: %ld byte(s)\n”, sizeof(c));
printf(”Size of an int: %ld byte(s)\n”, sizeof(i));
    printf(”Size of long int: %ld byte(s)\n”, sizeof(li));
    printf(”Size of a long long int: %ld byte(s)\n”, sizeof(lli));
printf(”Size of a float: %ld byte(s)\n”, sizeof(f));

return (0);
}
