#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char id[200];
char password[20];
void main(){
    int c;
        system("cls");
        printf("Silahkan Register atau Login\n");
        printf("1.Register\n");
        printf("2.Login\n");
        printf("pilihan anda : ");
        scanf("%d",&c);
        switch(c){
        case 1:
            reg();
            break;
        case 2:
            login();
            break;
        default:
            fflush(stdin);
            system("cls");
            printf("input salah, silahkan kembali ke menu");
            getch();
            main();
        }
}
void reg(){
        char key;
        int i = 0;
        system("cls");
        printf("Register ID = ");
        scanf(" %[^\n]s", &id);

        printf("Register Password = ");
        while((key = getch())!= 13){
            if(i < 0)
                i = 0;
            if(key == 8){
                if(i == 0)
                    continue;
                else{
                    printf("\b\b");
                    i--;
                    continue;
                }
            }
            if(i == 8){
                continue;
            }
            printf("*");
            password[i] = key;
            i++;
        }
        printf("\nRegister Berhasil, Silahkan Login");
        getch();
        system("cls");
        main();
}
void login(){
    char nama[100];
    char pass[8];
    char key;
    while(1){
        int i = 0;
        system("cls");
        printf("Input userName = ");
        scanf(" %[^\n]s", &nama);

        printf("Input password = ");
        while((key = getch())!= 13){
            if(i < 0)
                i = 0;
            if(key == 8){
                if(i == 0)
                    continue;
                else{
                    printf("\b\b");
                    i--;
                    continue;
                }
            }
            if(i == 8){
                continue;
            }
            printf("*");
            pass[i] = key;
            i++;
        }
        pass[i]='\0';
        if(strcmp(id, nama)== 0 && strcmp(password,pass)==0)
        {
            system("cls");
            printf("==============\n");
            printf("Selamat datang\n");
            printf("==============");
            break;
        }
        else{
            int c;
            system("cls");
            printf("incorrect password\n");
            getch();
            system("cls");
            printf("1.silahkan kembali ke menu\n");
            printf("2.kembali ke login\n");
            printf("pilihan anda : ");
            scanf("%d", &c);

            switch (c){
            case 1:
                system("cls");
                main();
                break;
            case 2:
                system("cls");
                login();
                break;
            }
            sleep(2000);
        }

    }
}
