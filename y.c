#include <stdio.h>

int main(){
    int n;  // �û����������
    int i;  // ѭ����־

    printf("����һ��������");
    scanf("%d",&n);
    printf("%d=",n);

    // n>=2��ִ�������ѭ��
    for(i=2; i<=n; i++){
        while(n!=i){
            if(n%i==0){
                printf("%d*",i);
                n=n/i;
            }else
                break;
        }
    }
    printf("%d\n",n);

    return 0;
}


