#include <stdio.h>
#include <string.h>
     
int main()
{    
    int i, so=0, chuThuong=0, chuHoa=0, kiTu=0,f=0;
    char password[255];
    printf("Nhap password cua ban: ");
    scanf("%s", &password);
    for(i=0; i<strlen(password); i++)
    {
        if(password[i] >= 0 && password[i] <= 9) so++;
        else if(password[i] >= 'a' && password[i] <= 'z') chuThuong++;
        else if(password[i] >= 'A' && password[i] <= 'Z') chuHoa++;
        else kiTu++;
    }
    if(strlen(password) >= 9)
    {
        if(so > 0) f+=1;
        if(chuThuong > 0) f+=1;
        if(chuHoa > 0) f+=1;
        if(kiTu > 0) f+=1;
    }
    switch(f)
    {
        case 0: printf("Mat khau khong chap nhan"); break;
        case 1 || 2: printf("Mat khau yeu"); break;
        case 3: printf("Mat khau trung binh"); break;
        case 4: printf("Mat khau manh"); break;
    }
}    