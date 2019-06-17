#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "cltsocket01.h"

//打桩
//客户端初始化环境
int cltSocket_init(void **handle){
	return 0;
}
	//5day

//客户端发报文
int cltSocket_senddata(void *handle, unsigned char *buf, int buflen){
	return 0;
}

//客户端收报文
int cltSocket_resvdata(void *hanle , unsigned char *buf, int *buflen){
	return 0;
}


//4 客户端销毁环境
int cltSocket_destory(void *handle){
	return 0;
}

int main(){
	printf("hello....\n");
	system("pause");
	return 0;
}
