#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "cltsocket01.h"

//��׮
//�ͻ��˳�ʼ������
int cltSocket_init(void **handle){
	return 0;
}
	//5day

//�ͻ��˷�����
int cltSocket_senddata(void *handle, unsigned char *buf, int buflen){
	return 0;
}

//�ͻ����ձ���
int cltSocket_resvdata(void *hanle , unsigned char *buf, int *buflen){
	return 0;
}


//4 �ͻ������ٻ���
int cltSocket_destory(void *handle){
	return 0;
}

int main(){
	printf("hello....\n");
	system("pause");
	return 0;
}
