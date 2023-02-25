#include <stdio.h>
#include <string.h>

int kiemTraMatKhauAnToan(char *xau)
{
    if(strlen(xau) >= 6)
    {
        int i, chuHoa, chuThuong, so, kiTuKhac, f;
        chuHoa = chuThuong = so = kiTuKhac = f = 0;
        for(i=0; i<strlen(xau); i++)
        {
            if(xau[i] >= 'A' && xau[i] <= 'Z') chuHoa++;
            else if(xau[i] >= 'a' && xau[i] <= 'z') chuThuong++;
            else if(xau[i] >= '0' && xau[i] <= '9') so++;
            else kiTuKhac++;
        }
        if(chuHoa > 0) f++;
        if(chuThuong > 0) f++;
        if(so > 0) f++;
        if(kiTuKhac > 0) f++;
        return f == 4 ? 1 : 0;
    }
    else return 0;
}

int main()
{
    char mk[100];
    printf("Nhap mat khau: ");
    gets(mk);
    printf(kiemTraMatKhauAnToan(mk) ? "Co" : "Khong");
}