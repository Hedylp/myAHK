// https://github.com/moshuying/myAHK
// window 10 default powershell.exe in C:\Windows\System32\WindowsPowerShell\v1.0
// ./make.ps1
#include <stdlib.h>
// #include <string.h>
int main(int argc,char *argv[]){
  // for debug
  // char str[500] = "echo �յ�����:";
  // strcat(str,*argv);
  // system(str);
  // char num[16] = {0};
  // char str2[500] = "echo ��������";
  // itoa(argc,num,10);
  // strcat(str2,num);
  // system(str2);
  system("cd C:\\Program Files\\PowerShell\\7");
  system("pwsh.exe ");
  system("pause");
  return 0;
}