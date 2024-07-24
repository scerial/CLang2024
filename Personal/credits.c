#include <stdio.h>
int main()
{
    char vo[4], eg1[4], eg2[4], ac[4], ba[4], dr[4], sy1[4], sy2[4];

    printf("\nCast:");
    scanf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t", &vo, &eg1, &eg2, &ac, &ba, &dr, &sy1, &sy2);

    printf("보컬 - %s\n일렉1 - %s\n일렉2 - %s\n어쿠 - %s\n베이스 - %s\n드럼 - %s\n신디1 - %s\n신디2 - %s\n", vo, eg1, eg2, ac, ba, dr, sy1, sy2);
}