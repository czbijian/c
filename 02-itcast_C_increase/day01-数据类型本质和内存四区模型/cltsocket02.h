
//�ڶ���api����
#ifndef _CLT_SOCKET2_H__
#define _CLT_SOCKET2_H__

//�ͻ��˳�ʼ������
int cltSocket_init2(void **handle); //5day

//�ͻ��˷�����
int cltSocket_senddata2(void *handle, unsigned char *buf, int buflen);

//�ͻ����ձ���
int cltSocket_resvdata2(void *hanle , unsigned char **buf, int *buflen);
//Ϊʲô����ط�������һ������ָ�룬������������һ���ӿ� 4day
int cltSocket_resvdata_Free2(unsigned char *buf); 

//4 �ͻ������ٻ���
//Ϊʲô����ط��ּ���һ��* 4day
int cltSocket_destory2(void **handle);


#endif //_CLT_SOCKET2_H__