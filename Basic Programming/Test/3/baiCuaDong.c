// #include <stdio.h>
// #include <string.h>

// void ghiDeTuK(char *x1, char *x2, int k)
// {
//     int i, j;
//     for(i=0, j= 0; i<strlen(x1); i++)
//     {
//         if(i >= k)
//         {
//             x1[i] = x2[j];
//             j++;
//             if(j == strlen(x2)) break;
//         }
//     }
// }
// int main()
// {
//     char s1[] = "123abcdef";
//     char s2[] = "MNP";
//     ghiDeTuK(s1, s2, 4);
//     puts(s1);
// }
// #include <stdio.h>
// #include <string.h>
// void ghiDe( char *s, char *ss, int n)
// {
// 	strncpy(s+n,ss, strlen(ss));
// 	puts(s);
// }
// int main()
// {
// 	char s[200]; char ss[200];
// 	int n;
// 	printf("Nhap xau 1:"); gets(s);
// 	printf("Nhap xau 2:"); gets(ss);
// 	printf("Nhap n="); scanf("%d",&n);
// 	ghiDe(s,ss,n);
// }
