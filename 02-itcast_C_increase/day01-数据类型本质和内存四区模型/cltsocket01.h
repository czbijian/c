
#ifndef _CLT_SOCKET_H__
#define _CLT_SOCKET_H__

//�ͻ��˳�ʼ������
int cltSocket_init(void **handle); //5day

//�ͻ��˷�����
int cltSocket_senddata(void *handle, unsigned char *buf, int buflen);

//�ͻ����ձ���
int cltSocket_resvdata(void *hanle , unsigned char *buf, int *buflen);


//4 �ͻ������ٻ���
int cltSocket_destory(void *handle);


#endif