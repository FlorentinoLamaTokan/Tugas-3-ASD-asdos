#include<stdio.h>
#include<string.h>
#include<stdlib.h>


char inusername[8], inpassword[8], username[8], password[8], key;

int main()
{
    int pilih;
    printf("1. Register\n");
    printf("2. Login\n");
    printf("3. Exit\n");
    printf("masukkan pilihan : ");
    scanf("%d", &pilih);

    switch (pilih)
    {
    case 1:
        daftar(0);
        break;
    case 2:
        login(0);
        break;
    default:
        break;
    }
    if(pilih<1||pilih>3)
    printf("\nTidak ada pilihan Menu");
    system("pause");
    system("cls");
        main();

}

void daftar()
{
    printf("MENU DAFTAR\n");
    printf("masukkan username = ");
    scanf(" %[^\n]s", &inusername);
    printf("masukkan password = ");
    scanf(" %[^\n]s", &inpassword);
    strcpy(username, inusername);
    strcpy(password, inpassword);
    printf("\nANDA TELAH REGIS\n\n");
    system("pause");
    system("cls");
    main();

}

void login()
{
   while (1)
    {
        int i = 0;
        system("cls");

        printf("masukkan username : ");
        scanf(" %[^\n]s", &username);


        printf("masukkan password : ");
        while ((key = getch()) != 13)
        {
            if (i < 0)
                i = 0;
            if (key == 8)
            {
                if (i == 0)
                    continue;
                else
                {
                    printf("\b \b");
                    i--;
                    continue;
                }
            }
            if (i == 8)
            {
                continue;
            }
            printf("*");
            password[i] = key;
            i++;
        }
    if ((strcmp(inusername,username)==0)&&(strcmp(inpassword,password)==0)) {
            printf("\nLOGIN SUKSES");
            system("pause");
        } else {
            system("cls");
            printf("MAAF PASSWORD ATAU USERNAME ANDA SALAH!!!\n\n");
            system("pause");
            login();
        }
        system("cls");
        main();

}
}
